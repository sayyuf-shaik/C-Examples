#include <stdio.h>
int main()
{

    volatile int i = 6;
    i = i + 2;
    printf ("%d",i);
    printf ("%d",++i);
}

