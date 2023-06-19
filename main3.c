#include <stdio.h>
#include <string.h>

//4.Разработать программу обработки символьной информации.
//Дано слово. Дописать к слову все его символы в обратном порядке.

void reverseString(char* str) //функция для обращения строки
{ 
    int length = strlen(str);  //strlen определяет длину исходной строки
    int i, j;

    for (i = length - 1, j = 0; i >= 0; i--, j++) //идем от конца строки к началу
	{
        str[length + j] = str[i]; //добавление символов в обратном порядке
    }

    str[length + j] = '\0';  //после добавления символов в обратном порядке добавляется завершающий нулевой символ
}

int main() {
    char word[100];

    printf("Enter the word: ");
    scanf("%s", word);

    reverseString(word);  //вызов функции для обращения строки

    printf("Result: %s\n", word);

    return 0;
}
