#include <header.h>
unsigned int left_rotate_bits (unsigned int num)
{
	num = num << 1;
	num = num | ( num >> ( ( INT_SIZE - 1 )) );
	return num;
}
