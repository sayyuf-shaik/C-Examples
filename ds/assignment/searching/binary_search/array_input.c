#include "header.h"
void array_input ( int a[] , int n )
{
    int i = 0;
    for ( i = 0;i < n ;i++ )
    {
        printf ("Enter the %d element : " ,i );
        a[i] = input();
    }
}
