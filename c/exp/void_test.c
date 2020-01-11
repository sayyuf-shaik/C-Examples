#include <stdio.h>
int main ( void ) 
{
    //char *ptr = "globaledge";
    void *str = "glob\0aledge";
    //str = ptr;
    printf("%s\n",str);
}

