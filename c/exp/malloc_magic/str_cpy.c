#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main ( void )
{
    char *src = NULL;
    char *dest = NULL;
    dest = ( char *) malloc ( sizeof(char)*8 );
    dest = strcpy(dest, src);
    printf("%s",dest);
    return 0;
}


