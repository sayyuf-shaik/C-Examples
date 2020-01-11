#include <stdio.h>
int factorial ( int x )
{
    printf("%d",x);
    return ( x * (factorial ( 5 ) - 1 ) );
}
int main ( void ) {
    int x = 5;
    printf("%d ",factorial(x));
    return 0;
}
