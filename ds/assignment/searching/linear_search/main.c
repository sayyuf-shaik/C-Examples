#include "header.h"
int main ( void )
{
    int a[MAX];
    int n;
    int element;
    printf ( "\nEnter the size of Array: ");
    n = input ( ); 
    printf ( "\nEnter the elements of Array: ");
    array_input ( a , n );
    printf ( "\nEnter the element: ");
    element = input ( );
    linear_search ( a, element );
    return 0;
}
