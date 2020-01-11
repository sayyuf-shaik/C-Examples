#include <stdio.h>
int main()
{   
    int a[10] = {1,2,3,4,5};
    a[5-9] = 1;
    printf (" %d", a[4]);
    return 0;
}
