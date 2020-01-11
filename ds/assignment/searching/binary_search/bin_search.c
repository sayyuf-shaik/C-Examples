#include "header.h"
void bin_search ( int a[] , int n , int element )
{
    int low;
    int high;
    int mid;
    low = 0;
    high = n - 1;
    while ( low != high ) {
        mid = ( (low + high ) / 2 );
        if ( element > a[mid] ) 
            low = mid + 1;
        else
            printf ( "%d found", a[mid] );
            break;

    }
}
