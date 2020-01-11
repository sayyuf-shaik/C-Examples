#include <stdio.h>
#define getbits( x, p, n) ( x = x & ( ( ~( ( ~0) << n ) <<p ) ) )
/*int main(void)
{
	char nx[10];
	char p[5];
	char n[5];
	printf("Enter the number :");
	fgets(nx, sizeof( nx ), stdin);
    unsigned int x = atoi(nx);
    printf("number in binary :");
	dec2bin(x);
	printf("\nEnter the position :");
    fgets(p, sizeof( p ), stdin);
    int np = atoi(p);
	printf("Enter the number of bits:");
    fgets(n, sizeof( n ), stdin);
	int nn = atoi(n );
	dec2bin(getbits(x,np,nn));
	return 0;
}*/
