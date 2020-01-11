#include <stdio.h>
char *strn_cpy( char *dest, char *src, size_t n)
{
    int i = 0;
    while ( i < n && *( src + i) != '\0' )
    {
        *dest++ = *src++;
        i++;
    }
    *dest = '\0';
    while( i > 0 )
     {
        *dest--;
         i--;
     }
    return dest;
}

int main( void )
{
    char *s = "sayyuf shaik";
    char d[100];
    char *ptr;
    ptr = strn_cpy ( d, s, 5);
    printf("%s\n",d);
    printf("%s\n",ptr);
    return 0;
}
