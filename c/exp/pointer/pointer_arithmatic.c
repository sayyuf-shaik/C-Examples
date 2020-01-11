#include <stdio.h>
int main()
{   
    char *s;
    char *p=s;
    while(*p = '\0')
        p++;
    printf("%d",p - s);
}

