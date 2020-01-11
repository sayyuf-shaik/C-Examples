#include <stdio.h>
int main ( void )
{
    FILE *fp = fopen ( "sample.txt", "w+");
    if ( fp == NULL ) {
        printf ( "The file creation is failed");
    }
    else
    {
        char *buf = "character";
        fprintf(fp,buf);
    }
    fclose ( fp);
    return 0;
}
