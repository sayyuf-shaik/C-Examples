#include <stdio.h>
int main ( void )
{
    int i = 1;
    char *p = (char *) &i;
    if(*p)
        printf("Little Endian %s",p);
    else
        printf("Little Endian");

    return 0;
}
