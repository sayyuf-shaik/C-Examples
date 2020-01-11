#include "header.h"
void *print_file( void *p )
{
    int offset = (int ) p;
    char *buf = NULL;
    buf = ( char * ) malloc ( sizeof(char)*BUF);
    if ( buf == NULL ) {
        printf("MALLLOC FAILED");
    }

    fread( buf, sizeof(char), offset, fp);  
    fwrite ( buf ,sizeof(char) , offset,fp1);
    
    return NULL;
}
            
