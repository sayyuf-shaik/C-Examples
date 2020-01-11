#include "header.h"
static int add(int a,int b)
{
    int c =a+b;
    return c;
}

int (*add1) (int ,int )=NULL;
add1 = &add;
int main ( void )
{
    int a = 5;
    int b = 4;
    int c=0;
    //int *func_ptr = NULL;
    c = (add1)(a,b);
    printf("a=%d c=%d",a,c);
    return 0;
}

