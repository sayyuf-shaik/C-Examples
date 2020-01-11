#include <stdio.h>

struct __attribute__((__packed__)) name {
     int a;
    char b;
    char c;
}struct_var;

int main ( void ) 
{
    printf("%d", sizeof( struct_var ) );
    return 0;
}
