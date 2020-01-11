#include <stdio.h>
int main ( void ) 
{
    int i;
    int a[5] = {1,2,3,4,5};
    int (*ptr)[5] = {&a};
    for( i = 0; i < 5 ; i++ ) 
    printf("ptr = %p \n*ptr = %p\n **ptr = %d \n", ptr , *ptr + i , *( *ptr + i ) );

    return 0;
}
