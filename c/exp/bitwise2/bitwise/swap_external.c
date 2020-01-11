/* Program to swap bits in two different numbers */
#include "header.h"

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
	return 0;
}

