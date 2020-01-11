/* Program to test and set the bits */
/* assignment -5 */
#include <stdio.h>
#define ts_bits( number, pos)  ( number & (1 << ( pos -1 )) ? (number) : ( number ^ ( 1 << ( pos - 1 ) ) ))

/*int main(void)
{
	char array[20];
	char pos_chunk[5]; 
	printf("Enter the number :");
	fgets( array , sizeof( array ), stdin);
	printf("\nEnter the position where you want set the bit :");
	fgets(  pos_chunk , sizeof( pos_chunk ), stdin );
	dec2bin( ts_bits( atoi( array ),atoi( pos_chunk ) ) );
	return 0;
}*/
