#include "header.h"
size_t str_spn(const char *buf1,const char *buf2)
{
    size_t count = 0;
   /* while ( (*buf1 == *buf2 ) && ( *buf1 != '\0' ) && ( *buf2 != '\0' ) ) {
        buf1++;
        buf2++;
        count++;
    }*/
    while ( *buf2 != '\0' ) {
        if ( *buf1 == *buf2 )  {
            buf1++;
            count++;
        }
        else 
            buf2++;
    }

    return count;
}

