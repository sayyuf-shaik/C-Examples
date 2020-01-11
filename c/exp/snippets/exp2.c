#include<stdio.h>
void add ( int *c, int *d )
{
    printf("%d",*c+*d);
}
int main ( void )
{
    int a =5;
    int b = 4;
    add(&a,&b);
    return 0;
}


