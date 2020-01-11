#include <stdio.h>
#include <string.h>
int main (void )
{   
    char *s1 = "string";
    char *s2 = "tring";
    int ret_val = strcmp( s1, s2 );
    printf ( "\n RET VAL = %d", ret_val);
    return 0;
}

