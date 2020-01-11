#include <stdio.h>
int fun()
{
    printf("bhh");
    printf("%d",getpid());
    getchar();
}
int main()
{
    int a[10000000];
    int i = 0;
    while ( i < 10000000 )
    {
        a[i] = 1;
        i++;
    }

    return 0;
}
