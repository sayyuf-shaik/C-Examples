#include <stdio.h>
int bit_swap (unsigned int number, int s, int d)
{
	int i;
	if( number & (1 << (d - 1) != number & ( 1 << (s - 1)) ))
		number = (number ^ ( 1 <<  (d - 1))) ^ (1 << (s - 1));
	for(i = 31;i >= 0;i--)
    {
        printf("%d", (number&(1<<i))>>i);
    }
	return 0;
}
