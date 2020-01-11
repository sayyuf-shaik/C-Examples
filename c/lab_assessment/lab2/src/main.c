#include "header.h"
int main ( void )
{   
    char *input_var = NULL;
    char *input_var2 = NULL;
    
       printf("Enter the first string");
       input_var = malloc_input ();
       printf("Enter the second string");
       input_var2 = malloc_input ();
       printf ( "%d", strcasecmp ( input_var, input_var2 ) );
               
	return 0;			
            
  
    } 
