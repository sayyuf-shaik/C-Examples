#include <stdio.h>
int main ( void ) 
{
    char str[] = "abc\068tAB";
    printf ( "%d%d\n", sizeof ( str ) ,strlen ( str ) );
    printf ( "%s",str);
    printf ( "sayyuf\0sharan" );
    return 0;
}
