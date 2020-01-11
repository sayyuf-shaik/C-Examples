#include <stdio.h>
int main(void)
{
	int a=10;
    int arr[3][5] = { {1,2,3,4,5} , {6,7,8,9,10} , {11,12,13,14,15}}; 
                int **p  = arr; 
                printf("*(*arr + 1) = %d\n" , *(*arr + 1)); 
                    printf("**(arr + 1) = %d\n" , **(arr + 1));
                    printf("&p + 1 = %d\n" , &p + 1  ); 
                        printf("%d\n", *(*(arr + 2) + 3));
                         return 0; 
    

	printf("%d",b);
}
