#include <stdio.h>
int main()
{
    int a =5;
    int *p = &a;
    int **ptr = &p;
    printf("%d\n",*(*ptr));
   // printf(p);
}
