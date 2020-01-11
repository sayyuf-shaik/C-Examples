#include <stdio.h>
struct tag
{
    int :0;
}s;
void func()
{
    int  *a = 0xbfe6897c;
    printf("%d \n",*a);
}
/*int main ( void )
{
    //int a:33;
    int a[4] = {1,2,3,4};
    int *ptr;
    ptr = &a;
    //func();
    printf ("%d",sizeof(s));
    return 0;
}*/

