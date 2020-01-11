#include <stdio.h>
int main()
{
    int n = 0xacda457a;
    char *ptr;
    ptr = (char*)&n;
    printf("%x",*ptr);
    return 0;
}
