#include "header.h"
int main ( void )
{   
    char *input_var = NULL;
    char *input_var2 = NULL;

    printf ( "Enter the first string " );
    if ( NULL != ( input_var = ( char * ) malloc ( sizeof(char) * BUF ) ) ) {
        if ( (  NULL == ( fgets ( input_var , BUF , stdin ) ) ) )
            perror ( "fgets failed" );
    }
    else
        perror ( "malloc failed" );

    printf ( "Enter the second string " );
    if ( NULL != ( input_var2 = ( char * ) malloc ( sizeof(char) * BUF ) ) ) {   
        if ( (  NULL == ( fgets ( input_var2 , BUF , stdin ) ) ) ) 
            perror ( "fgets failed" ); 
    }
    else
       perror ( "malloc failed");
       fprintf ( stdout, " result --> %d", str_case_cmp ( input_var, input_var2 ) );
               
	return 0;			
            
  
    } 
