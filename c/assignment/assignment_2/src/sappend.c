#include "header.h"
char *sappend ( char *str1, char *str2 )
{
    int i = 0;
    int j = 0;
    while ( *( str1 + i ) != '\0' ) 
        i++;
        i--;
    while ( *( str2 + j ) != '\0' ) {
        *( str1 + i ) = * ( str2 + j );
        i++;
        j++;
    }
    //*( str2 + j ) = '\0';
    //printf("%s", str1);

    return  str1;
    
}

    


