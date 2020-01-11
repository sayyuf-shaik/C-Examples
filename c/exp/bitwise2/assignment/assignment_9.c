#include <stdio.h>
#define MAX_SIZE (1 << ((sizeof(int)*8)-1))
#define MAX(number1, number2) (~ ( number1 ^ number2 ) ^ ( ~number2))
#define MIN(number1, number2) (~ ( number1 ^ number2 ) ^ ( ~number1))
#define CLEAR_RIGHT( num ) ( num & (num - 1))
#define SET_RIGHT( num ) (num | (num + 1))
#define SET_LEFT( num ) ( num | ( num + (MAX_SIZE) )
#define CLEAR_LEFT( num ) ( num & (num - 8))
int main(void)
{
    char num1[20];
    char num2[20];
	unsigned int number1;
	unsigned int number2;
    printf("Enter the number :");
    fgets( num1 , sizeof( num1 ), stdin);
	/*printf("Enter the number :");
    fgets( num2 , sizeof( num2 ), stdin);*/
	number1 = atoi(num1);
	/*number2 = atoi(num2);
	printf("maximum of two numbers is %d ",MAX(number1,number2));
	printf("minimum of two numbers is %d ",MIN(number1,number2));*/
	//dec2bin(CLEAR_RIGHT(number1));
	//dec2bin(SET_RIGHT(number1));
    dec2bin(SET_LEFT(number1));
    //dec2bin(CLEAR_LEFT(number1));
	return 0;

}

