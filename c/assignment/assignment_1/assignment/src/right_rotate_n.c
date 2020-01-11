#include <header.h>
unsigned int right_rotate_n_bits( unsigned int number, int by_times )
{
	number = number >> by_times;
	number = number | ( number << ( ( INT_SIZE - 1 ) - by_times));
	return number;
}
