#include <stdio.h>
char *str_cpy( char *d, const char *s )
{
    while(*d != '\0')
        *(d++)=*(s++);
    return d; 
}
int main ( void )
{
    char *src = "sayyuf";
    char *dest;
    char *ptr;
    ptr = str_cpy ( &dest, &src);
    printf("%s",dest);
   printf("%s",ptr);
}
