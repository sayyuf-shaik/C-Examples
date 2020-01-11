#include "header.h"
/*int bitcopy(int *snum,int *dnum, int n, int spos , int dpos)
{
	int i = spos - n +1;
	int j = dpos - n +1;
	int temp = *dnum;
	*snum = ( ( ( *snum << ( ( INT_SIZE - 1 ) - spos ) ) >> ( ( INT_SIZE - 1 ) - spos ) ) & ( ( *snum >> i ) << i ) );
	*dnum = ( ( ( *dnum << ( ( INT_SIZE - 1 ) - dpos ) ) >> ( ( INT_SIZE - 1 ) - dpos ) ) & ( ( *dnum >> j ) << j ) );
	*dnum = *dnum ^ temp;
	( spos >= dpos ) ? ( *dnum = *snum >> ( spos - dpos ) | *dnum ) : ( *dnum = *snum << ( dpos - spos ) | *dnum );
	return *dnum;
}*/
