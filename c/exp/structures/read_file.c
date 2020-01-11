#include <stdio.h>

int main ( void ) 
{
    FILE *fp;
    char *buffer = NULL;
    buffer = malloc ( sizeof(char) * 256 );
    fp = fopen ( "sample.txt","r+");
    if ( fp == NULL )
    {
        printf ( "File open is filed " );
        exit ( 1 );
    }
    else 
    {
        while ( ( fgets ( buffer , 256, fp) != NULL ) ) { 
            puts ( buffer);
            __fpurge ( buffer );
        }
    }

    fclose (fp);
    return 0;
}




