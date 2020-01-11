#include <stdio.h>
int main ( void )
{
    char *p;
    int n = 0x5042;
    p = ( char * ) &n;//casting integer address to char type
    printf ( "%p",p);
    printf ( "%c", *p );
  
    printf ( "%c", *p + 1 );
    printf ( "%c", *p + 2 );
    printf ( "%c", *p + 3 );

}
