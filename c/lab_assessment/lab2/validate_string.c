#include "header.h"

int valid_string ( const char *str )
{

    int i = 0;
    while ( * ( str + i ) != '\n' ) {
        if ( * ( str + i ) >= 32 && *( str + i ) <= 126 ) 
            i++;
        else
            return 0;
    }
    return 1;
}

