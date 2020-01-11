#include "header.h"
int main ( void )
{
    int a[MAX];
    int n;
    int element;
    printf ( "\nEnter the size of array: ");
    n = input ( );
    printf ( "\nEnter the elements in the array: ");
    array_input ( a, n );
    display ( a, n );
    printf ( "\nEnter the element to find array: ");
    element = input ( );
    bubble_sort ( a, n );
    bin_search ( a, n ,element);
    display ( a, n );
    return 0;
}



