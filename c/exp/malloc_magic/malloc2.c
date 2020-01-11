#include <stdio.h>
#include <stdlib.h>

int main ( void ) 
{
    char *ptr = malloc ( 10 );

    char *str = malloc ( 12 );


    str[7] = 's';
    printf("%p\n",ptr);
    printf("%p\n",str);
    printf("%c\n",str[7]);
    printf("%d\n",ptr[16]);

    return 0;
}
