#include <header.h>
int bit_swap (unsigned int number, int s, int d)
{
	int i;
	if( ( number & ( 1 << d ) ) != ( number & ( 1 << s ) ) )
		number = number ^( ( 1 <<  ( d ) ) ) ^ ( 1 << ( s ) );
	for( i = ( INT_SIZE - 1 ) ; i >= 0 ; i--) 
    {
        printf ( "%d", ( number & ( 1 << i ) ) >> i );
    }
	return 0;
}
