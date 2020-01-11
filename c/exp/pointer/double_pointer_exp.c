#include <stdio.h>
#include <stdlib.h>
int main ( void ) 
{

    int **double_ptr = NULL;
    int i;
    double_ptr = ( int * ) malloc ( sizeof ( int ) * 2 );

    for ( i = 0 ; i < 3 ; i++ ) {
          ( *double_ptr + i ) = ( int * ) malloc ( sizeof ( int ) * i );
    }

    *(*( double_ptr + 1 ) + 2 ) = 55;

    printf ( " value = %d " , *(*( double_ptr + 1 ) + 2 ) );

    return 0;
}

    
