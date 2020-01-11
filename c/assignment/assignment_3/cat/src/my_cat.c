#include <stdio.h>
#include <stdlib.h>
int main ( int argc, char *argv[] ) 
{
    FILE *fp = NULL;
    char *buf = NULL;
    int count = 0;
    int lines;
    buf = ( char * ) malloc ( sizeof(char) *256 );
    fp = fopen ( argv[2] , "r+" );
    if ( fp == NULL ) {
        printf ( "Error in opening the file: \n");
        exit ( 0 );
    }

    lines = atoi ( argv[1] );
    //printf ( "%d" , lines );
    lines--;

    while ( count <= lines ) {
            if ( fgets ( buf, 256,fp ) == NULL ) {
                 printf ( "fgets dumped uu!!!!!!!!!! \n");
                 exit(0);
            }

            count++;
            fprintf(stdout,"%d %s",count,buf);
    }

    fclose(fp);

    return EXIT_SUCCESS;
}

