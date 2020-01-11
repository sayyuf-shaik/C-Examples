#include "header.h"
char *chr_add_instr ( char *buf, char c)
{
    int i = 0;
    while ( *( buf + i ) != '\0' ) {
       if ( *( buf + i) == c )
        {
            return ( buf + i);
        }
       i++;
    }

}



/*
int main ( void )
{
    char c = 'y';
    char *input_var = malloc ( sizeof( char ) );
    fgets ( input_var, sizeof( char )*20, stdin );
    printf(" The address is %p ", chr_add_instr ( input_var, c) );
    return 0;
}
*/
