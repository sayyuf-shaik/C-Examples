#include <stdio.h>
//#include <string.h>

int my_str_cmp( char *s1, char *s2 )
{
    int flag = 0;
    while ( *s1 != '\0' )
    { 
        if ( *s1 == *s2 )
        {
           s1++;
           s2++;
        } 
        else if ( *s1 < *s2 )                                               
            flag = -1;    
        else
            flag = 1;
}
    return flag;
}
int main ( void )
{
    char *s1 = "string";
    char *s2 = "strihkhkkng";
    int ret_val = strcmp ( s1, s2 );
    printf("%d ", ret_val);
    return 0;
}
