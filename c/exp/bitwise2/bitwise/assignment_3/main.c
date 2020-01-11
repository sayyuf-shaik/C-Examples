#include <stdio.h>
int main(void)
{
    char number[10];
    char number2[10];
    char spos[5];
	char dpos[5];
    char bits[5];
    printf("Enter the source number ");
    fgets( number , sizeof( number ), stdin);
    printf("\nnumber in binary: ");
    dec2bin(atoi( number ));
    printf("\nEnter the destination number ");
    fgets( number2 , sizeof( number2 ), stdin);
    printf("\nnumber in binary: ");
    dec2bin(atoi( number2 ));
    printf("\nEnter the source position ");
    fgets( spos , sizeof( spos ), stdin);
	printf("\nEnter the destination position ");
    fgets( dpos , sizeof( dpos ), stdin);
    printf("Enter number of bits: ");
    fgets( bits , sizeof( bits ), stdin);
    dec2bin( bit_copy(atoi( number ), atoi(number2 ),atoi( bits), atoi( spos), atoi(dpos)) );
    return 0;
}

