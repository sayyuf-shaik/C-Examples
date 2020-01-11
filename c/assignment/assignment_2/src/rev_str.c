#include "header.h"
char *rev_str ( char *str ) 
{
    int len = 0;
    char temp;
    char *ptr;
    int size;
    while ( *( str + len ) != '\0' ) {
        len++;
    }
    len--;
    size = len;
    ptr = str + len;
    while ( str <= ptr ) {
        temp = *str;
        *str = *ptr;
        *ptr = temp;
        ptr--;
        str++;
    }

    return ( str - ( size / 2 ) );
}



