#include "header.h"
//#include <stdio.h>
//#include <string.h>

int strcmp( char *s1, char *s2 )
{
    while ( (*s1 == *s2) && *s1 != '\0' && *s2 != '\0' )
    { 
           s1++;
           s2++; 
    }
        if ( *s1 == '\0' && *s2 == '\0' ) {
            return 0;
        }
        else if ( *s1 < *s2 )                                               
            return -1;    
        else
            return 1;
}
/*int main ( void )
{
    char *s1 = "abcde";
    char *s2 = "abcde";
    int ret_val = strcmp ( s1, s2 );
    printf("%d ", ret_val);
    return 0;
}
*/
