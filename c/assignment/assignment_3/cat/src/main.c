#include "header.h"
//#include <stdio.h>
//#include <stdlib.h>
//#define BUF 256
int main ( int argc, char *argv[] )
{
    int i = 0;
    FILE *fp;
    char *buf = NULL;
    buf = ( char * ) malloc ( sizeof(char) * BUF );
    for ( i = 1; i < argc; i++) {
    fp = fopen ( argv[i] , "r" );
    if( fp == NULL ) {
        printf( "File is not created");
    }
    else
    {
        while ( fgets ( buf, BUF, fp ) != NULL ) {
        fputs ( buf , stdout );
        }
        fclose(fp);
    }
    }
    return 0;
}



