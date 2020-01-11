/* Program to swap bits in two different numbers */
#include <stdio.h>

int bits_swap(unsigned int number1,unsigned int number2,unsigned int d,unsigned int s)
{
	if( ( number1 & ( 1 << (d - 1) ) ) != ( number2 & (1 << (s-1) ) ) )
	{
	number1 = number1 ^ ( 1 << ( d - 1 ) );
	number2 = number2 ^ ( 1 << ( s - 1 ) );
	}

	dec2bin(number1);
	printf("\n");
	dec2bin(number2);
}

int main(void)
{
	unsigned int number1;
	unsigned int number2;
	unsigned int d;
	unsigned int s;
	printf("Enter the two numbers :");
	scanf("%d%d", &number1,&number2);
	printf("\nEnter the destination position :");
	scanf("%d", &d);
	printf("\nEnter the source position :");
    scanf("%d", &s);
	bits_swap(number1, number2, d, s);
	return 0;
}
