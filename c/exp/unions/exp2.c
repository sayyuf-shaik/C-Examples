#include <stdio.h>
#pragma pack(6)
struct p{
    char a;
    int b;
    char c;
}s;
int main()
{
    printf("%d",sizeof(s));
    return 0;
}

