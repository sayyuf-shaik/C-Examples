#include "header.h"
int invert (int *snum, int pos, int n ) 
{
    int mask;
    if ( pos <= ( INT_SIZE - 1 ) ) {
        mask =   ( ~ ( ( ~0 ) << n ) ) << pos ;
        *snum = *snum ^ mask;
        printf("%d",*snum);
        return 1;
    }
    else {
        return 0;
    }
}

