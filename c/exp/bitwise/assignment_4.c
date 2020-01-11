#include <stdio.h>
unsigned int even_bit_toggle( unsigned int number )
{
	int i;
	for(i = 1; i < 32; i += 2 )
		number = number ^ ( 1 << i );
	return number;		
}

unsigned int odd_bit_toggle( unsigned int number )
{
	int i;
	for(i = 0; i < 32; i += 2)
		number = number ^ ( 1 << i);
	return number;
}

int main(void)
{
    char array[20];
    printf("Enter the number :");
    fgets( array , sizeof( array ), stdin);
	printf("\nNumber in Binary:");
	dec2bin( atoi(array) );
	printf("\nToggled even bits :\n");
    dec2bin( even_bit_toggle( atoi( array )) );
	printf("\nToggled odd bits :\n");
	dec2bin( odd_bit_toggle( atoi( array )) );
    return 0;
}

