#include <stdio.h>

union union_name {
    int a;
    char b;
    double d;
}union_var;

int main ( void ) 
{
    printf ( "%d", sizeof ( union_var ) );
    return 0;
}
