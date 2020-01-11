/* Program to count the set bits and clear bits in a number  */
/* assignment - 7 */
#include <header.h>
int count_bit_set( unsigned int number )
{
	int i;
	int count_set = 0;
	for(i = 0; i < INT_SIZE ; i++ )
		( number & ( 1 << i ))? count_set++ : count_set;
	return count_set;
}

int count_bit_clear( unsigned int number )
{
    int i;
    int count_clear = 0;
    for(i = 0; i < INT_SIZE ; i++ )
        ( number & ( 1 << i ))? count_clear : count_clear++;
    
    return count_clear;
}













