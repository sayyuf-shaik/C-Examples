#include "header.h"
unsigned int even_bit_toggle( unsigned int number )
{
	int i;
	for(i = 1; i < INT_SIZE ; i += 2 )
		number = number ^ ( 1 << i );
	return number;		
}

unsigned int odd_bit_toggle( unsigned int number )
{
	int i;
	for(i = 0; i <  INT_SIZE ; i += 2)
		number = number ^ ( 1 << i);
	return number;
}


