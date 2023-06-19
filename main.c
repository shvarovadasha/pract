#include <stdio.h>

int main() {
    int number;
    int first_element;
    int count = 0;
    
    printf("Enter the first number: "); //ввод первого числа
    scanf("%d", &first_element);
    
    printf("Enter subsequent numbers (enter a negative number to finish): "); //ввод последующего числа и обработка последовательности
    scanf("%d", &number);
    
    while (number >= 0) {
        if (number % first_element == 0)  //проверка делится ли число на первый элемент нацело
		{ 
            count++; 
        }
        scanf("%d", &number);  //ввод следующего числа
    }
    
    //вывод результата
    printf("Count of numbers divisible by the first element: %d\n", count);
    return 0;
}