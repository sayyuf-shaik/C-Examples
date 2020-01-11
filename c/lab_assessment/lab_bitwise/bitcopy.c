#include"header.h"


int  bitcopy ( int *snum,  int *dnum, int n,  int spos, int dpos )
{	
	if(( n <= spos + 1 ) && ( dpos + 1 >= n ) )
	{
		*snum = ( *snum >> ( spos - n + 1 ) ) << ( ( INT_SIZE ) - n );
		*dnum = *dnum | *snum >> ( ( ( INT_SIZE )- 1 ) - dpos );
		return 1;
	}
	else{
		return 0;
	}

}
	
