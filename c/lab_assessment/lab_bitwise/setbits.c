#include "header.h"
int setbits (int *snum, int *dnum, int pos, int n)
{
    //if ( pos 
	*snum = *snum >> ( ( pos - n ) + 1 );
 	*snum = ( *snum << ( ( INT_SIZE - 1 ) - pos ) ) >> ( ( INT_SIZE - 1 ) - n );
    *dnum = ( *dnum >> n ) << n ;
    *snum = *snum | *dnum ;
	 return 1;
}

