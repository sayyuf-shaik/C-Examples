#include "header.h"

char* strtok(char *str, const char* delim) {
    static char* buffer;
    if(str != NULL) 
		buffer = str;
    if( buffer[0] == '\0') 
		return NULL;
 
    char *ret = buffer;
    char  *b;
    const char *d;
 
    for ( b = buffer; *b !='\0'; b++ ) {
        for( d = delim; *d != '\0'; d++ ) {
            if( *b == *d ) {
                *b = '\0';
                buffer = b+1;
 
                // skip the beginning delimiters
                /*if(b == ret) { 
                    ret++; 
                    continue; 
                }*/
                return ret;
            }
        }
    }
 
    return ret;
}

