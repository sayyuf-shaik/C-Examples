#include <header.h>
unsigned int right_rotate_bits (unsigned int num)
{
	num = num >> 1;
	num = num | (num << ( INT_SIZE - 1));
	return num;
}
