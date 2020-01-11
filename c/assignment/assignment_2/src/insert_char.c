#include <header.h>
//#include <
char * insertchar (char *str, const char ch, int pos)
{
    /*char *ptr = NULL;
    char *str_ptr = NULL;*/
    int len = 0;
    while ( *( str + len ) != '\0' ) 
        len++;
    printf ("%d", len);
    /*ptr = str + len;
    *( ptr + len + 1 ) = '\0';
    str_ptr = str + ( len - 1);
    while ( pos <= len ) {
        *ptr = *str_ptr;
        str_ptr--;
        ptr--;
        len--;
    }
    *str_ptr = ch;
    str_ptr--;
    printf("%s",str_ptr);
    return "aa";*/
    int i = len + 1;
    int j = len;
    while ( pos <= j ) {
        *( str + i) = *( str + j );
        i--;
        j--;
    }
    *( str + i ) = ch;
    *( str + len ) = '\0';
    return str;
}   

