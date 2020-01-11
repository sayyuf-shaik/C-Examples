#include <stdio.h>
#include <string.h>
char *str_tok ( char *str , const char *delim ) 
{
    static char *buffer;
    if ( str != NULL )
        buffer = str;
int main ( void )
{   
    char abc[] = "shaik-sayyuf-basha";
    char *token;
    token = strtok ( abc, "-");
    while ( token != '\0' )
    {   
        printf ( "first time == %s\n" ,token);
        token = strtok (NULL, "-");
    }
    printf ("\n\n\n\n\n%s", token);
    return 0;
        
}

