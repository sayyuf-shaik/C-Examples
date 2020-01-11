#include "header.h"
int input ( )
{
    char *buf = NULL;
    buf = ( char * ) malloc ( sizeof(char) * BUF );
    //printf ("Enter the number");
    fgets ( buf, BUF ,stdin );
    return (atoi(buf));
} 
