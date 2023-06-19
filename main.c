#include <stdio.h>
 
//1. Разработать, используя цикл while и не вводя массивы, программу обработки последовательности чисел.
//Определить количество чисел последовательности, делителем которых является её первый член. 
//Окончание ввода – отрицательное число. 
 
int main() 
{
    int number;
    int firstElement; //переменная первого элемента
    int count = 0;
    
    printf("Enter the first number: "); //ввод первого числа
    scanf("%d", &firstElement);
    
    printf("Enter subsequent numbers (enter a negative number to finish): "); //ввод последующего числа и обработка последовательности
    scanf("%d", &number); 
    
    while (number >= 0) //цикл выполняющийся пока введенное число не является отрицательным
	{
        if (number % firstElement == 0)  //проверка делится ли число на первый элемент нацело
		{ 
            count++; //если делится, то увеличиваем значение счетчика count
        }
        scanf("%d", &number);  //ввод следующего числа
    }
    
    printf("Count of numbers divisible by the first element: %d\n", count);  //вывод количества чисел, делящихся нацело на первый элемент
    return 0;
}