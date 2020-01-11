#include "header.h"

int main ( void ) 
{
    char *buf = NULL;
    buf = ( char * ) malloc ( sizeof (char) * BUF );
    if ( buf == NULL ) {
       perror ( "Malloc failed ");
      exit ( EXIT_FAILURE );
    } 
    printf("Enter the data");
    if ( fgets ( buf , BUF , stdin ) == NULL ) {
        perror ( "fgets error");
        exit ( EXIT_FAILURE );
    }

    printf( " Reverse_str = %s\n" , rev_str ( buf ) );


    return 0;
}

