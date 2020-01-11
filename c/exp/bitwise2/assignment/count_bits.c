/* Program to count the set bits and clear bits in a number  */
/* assignment - 7 */
#include <stdio.h>
int count_bit_set( unsigned int number )
{
	int i;
	int count_set = 0;
	for(i = 0; i < 32 ; i++ )
		( number & ( 1 << i ))? count_set++ : count_set;
	return count_set;
}

int count_bit_clear( unsigned int number )
{
    int i;
    int count_clear = 0;
    for(i = 0; i < 32 ; i++ )
        ( number & ( 1 << i ))? count_clear : count_clear++;
    
    return count_clear;
}
/*
int main(void)
{
	char array[20];
    char pos_chunk[5];
    printf("Enter the number :");
    fgets( array , sizeof( array ), stdin);
    printf("\nNumber of set bits : %d",count_bit_set( atoi( array ) ));
	printf("\n");
	printf("\nNumber of clear bits : %d", count_bit_clear(atoi (array ) ));
    return 0;

}*/
