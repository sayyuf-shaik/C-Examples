#include <stdio.h>
int main(void)
{
	char number[10];
	char number2[10];
	char pos[5];
	char bits[5];
	printf("Enter the number ");
	fgets( number , sizeof( number ), stdin);
    printf("\nnumber in binary: ");
    dec2bin(atoi( number ));
	printf("Enter the number2 ");
    fgets( number2 , sizeof( number2 ), stdin);
    printf("\nnumber in binary: ");
	dec2bin(atoi( number2 ));
    printf("\nEnter the position ");
    fgets( pos , sizeof( pos ), stdin);
    printf("Enter number of bits: ");
    fgets( bits , sizeof( bits ), stdin);
    dec2bin(copy_bits(atoi( number ), atoi( pos ), atoi(number2 ), atoi(bits)) );
    return 0;
}
