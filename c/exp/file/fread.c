#include <stdio.h>
int main ( void )
{
    FILE *fp = fopen ( "sample.txt", "r");
    if ( fp == NULL ) {
        printf ( "The file creation is failed");
    }
    else
    {
        char *buf = malloc ( sizeof (char) *256);
        fscanf(fp,buf);
        printf("%s",buf);
    }
    fclose ( fp);
    return 0;
}
