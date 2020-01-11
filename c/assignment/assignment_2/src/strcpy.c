#include "header.h"
void str_cpy( char *d, const char *s )
{
    while(*d != '\0')
        *(d++)=*(s++);
 
}
