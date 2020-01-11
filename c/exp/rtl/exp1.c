#include <stdio.h>
struct p{
    int p;
    int d;
}s;
int main( void )
{
    s.p = 25;
    printf ( "%d",s.p );
    return 0;
    printf ( "unreachable code" );
}
