#include "header.h"
void linear_search ( int a[] , int element ) 
{
    int i = 0;
    while ( a[i] != element )
        i++;
    printf ( "%d is found at %d ", a[i], i);
}
