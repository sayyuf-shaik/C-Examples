#include <stdio.h>
int main(void)
{
	char number[10];
	char pos[5];
    char bits[10];
	printf("Enter number: ");
	fgets( number , sizeof( number ), stdin);
	printf("\nnumber in binary: ");
	dec2bin(atoi( number ));
	printf("\nEnter the position ");
    fgets( pos , sizeof( pos ), stdin);
	printf("Enter number of bits: ");
    fgets( bits , sizeof( bits ), stdin);
    dec2bin(invert (atoi( number ), atoi( pos ), atoi(bits)) );
	return 0;
}
