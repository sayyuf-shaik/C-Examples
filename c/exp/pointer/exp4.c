#include <stdio.h>
int main ( void )
{
    void *n;
    int p = 5;
    n = &p;
    printf("%d",*((int *)n));
}
