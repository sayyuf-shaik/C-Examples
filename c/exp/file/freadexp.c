#include <stdio.h>
#include <stdlib.h>

int main ( int argc, char *argvs[])
{
    FILE *fp;
    FILE *fp1;
    int size;
    char *buf = NULL;
    buf = ( char * ) malloc ( sizeof(char) *256  );
    fp = fopen (argvs[1],"r");
    if ( fp == NULL ) {
        printf (" error in opening file \n");
    }
    fp1 = fopen ("new.txt","w+");
    if ( fp1 == NULL ) {
        printf (" error in opening file \n");
    }
    fseek ( fp, 0, SEEK_END);
    size = ftell (fp);
    rewind (fp);
    printf ( "size = %d",size );
    printf( "characters read = %d ", fread ( buf ,sizeof(char),size,fp ));
    printf( "characters write = %d ", fwrite ( buf ,sizeof(char),size, fp1 ));
    fclose (fp);
    fclose (fp1);
    return 0;
}  



