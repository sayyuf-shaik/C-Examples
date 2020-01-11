/** function to implement reverse of the string **/
#include "header.h"

char *rev_str ( char *str ) 
{
    int len = 0;
    char temp;
    char *ptr;
    len = printf("%s",str); /* printf will return how many characters it has printed */
    len--; 
    ptr = str + len; 
    while ( str <= ptr ) {
        temp = *str;  /* swapping the two characters */
        *str = *ptr;
        *ptr = temp;
         ptr--;
         str++;
    }


    return ( str - ( len / 2 ) );
}



