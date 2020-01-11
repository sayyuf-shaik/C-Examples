#include <stdio.h>
int main()
{
    int a;
    int *p = &a;
    int *s;
    s = p;
    printf ("%p",p + 1);
}

