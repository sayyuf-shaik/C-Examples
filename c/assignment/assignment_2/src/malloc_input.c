#include "header.h"
char *malloc_input ( )
{
    char *input_var =  NULL;
    input_var = malloc ( sizeof( char ) * BUF );
    fgets ( input_var, sizeof( char )*20, stdin );
    return input_var;
}
