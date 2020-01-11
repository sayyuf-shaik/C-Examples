#include <header.h>
unsigned int bit_copy(unsigned snum, unsigned int dnum,int n,int s, int d)
{
	int i = s - n +1;
	int j = d - n +1;
	unsigned int temp = dnum;
	snum = ( ( ( snum << ( ( INT_SIZE - 1 ) - s ) ) >> ( ( INT_SIZE - 1 ) - s ) ) & ( ( snum >> i ) << i ) );
	dnum = ( ( ( dnum << ( ( INT_SIZE - 1 ) - d ) ) >> ( ( INT_SIZE - 1 ) - d ) ) & ( ( dnum >> j ) << j ) );
	dnum = dnum ^ temp;
	( s >= d ) ? ( dnum = snum >> ( s - d ) | dnum ) : ( dnum = snum << ( d - s ) | dnum );
	return dnum;
}
