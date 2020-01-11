#include "header.h"
int getbits (int *snum, int pos, int n ) 
{
    int mask;
    if ( pos <=  ( INT_SIZE - 1 ) ) {
        mask = ( ~ ( ( ~0 ) << n ) ) << pos ;
        *snum =  ( *snum & mask ) >> pos;
        return *snum;
    }
    else {
        return 0;
    }
}

