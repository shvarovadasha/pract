#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5}; //ввод массива	
    for(int i = 0; i < 5; i++){	//вывод масссива
    	printf("%d ", *(arr + i));
	}
	
	printf("\n");
	
	int k;
    printf("Input k: "); //ввод числа k
	scanf("%d", &k);
	
	for(int i = 0; i < 5; i++){	//вывод масссива
    	if(*(arr + i) % k == 0)
    	{
    		*(arr + i) = 0;
		}
	}
	int i = 0, j = 0;
	while(i < 5) {
		if(*(arr + i) != 0){
			*(arr + j) = *(arr + i);
			j++;
		}
		i++;
	}
	while(j < 5){
		*(arr + j) = 0;
		j++;
	}
    printf("New array:\n");
	for(int i = 0; i < 5; i++){	//вывод масссива
    	printf("%d", *(arr + i));
	} 
    return 0;
}
