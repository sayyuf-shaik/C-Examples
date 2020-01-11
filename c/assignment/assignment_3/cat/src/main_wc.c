#include "header.h"
//#include <stdio.h>
//#include <stdlib.h>
//#define BUF 256
int main ( int argc, char *argv[] )
{
    int i = 0;
    int count = 0;
    int line = 0;
    int word = 0;
    char ch;
    char prev;
    FILE *fp;
    char *buf = NULL;
    buf = ( char * ) malloc ( sizeof(char) * BUF );
   // for ( i = 1; i < argc; i++) {
    fp = fopen ( argv[1] , "r" );
    if( fp == NULL ) {
        printf( "File is not created");
    }
    else
    {
        while (  ( ch = fgetc ( fp ) ) != EOF ) {
            
            if ( ( ch == ' ' &&  prev != ' '  && prev != '\n'  && prev != '\t'  ) ) {
              word++;
              count++;
           }
           else if ( ch == '\n' ) {
              line++;
              count++;
              word++;
           }
           else
              count++;
         prev = ch;
        } 
        fclose(fp);
    }
    printf ( " the characters are %d ", count);
    printf ( " the lines are %d ", line);
    printf ( " the words are %d ", word);
    //}
    
    return 0;
}



