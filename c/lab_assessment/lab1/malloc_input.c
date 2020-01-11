#include "header.h"
unsigned char *malloc_input ( )
{
	int i = 0;
    unsigned char *input_var =  malloc ( sizeof( char ) );
	unsigned char *input = malloc ( sizeof(char));
    fgets ( input_var, sizeof( char )*20, stdin );
/*	while ( *input_var != '\n') {
		*(input + i) = *input_var;
			i++;
			input_var++;
	}*/
    return input_var;
}
