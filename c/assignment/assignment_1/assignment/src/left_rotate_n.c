#include <header.h>
unsigned int left_rotate_n_bits ( unsigned int number, int n )
{
	number = number << n;
	number = number | ( number >> ( (INT_SIZE - n ) ) );
 	return number;
}
