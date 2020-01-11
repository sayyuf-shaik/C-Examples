#include <stdio.h>
typedef struct a
{
    int a;
    char c;
    double d;
}tag[5];
int main(void)
{
    typedef int a;
    printf("size of [tag] = %d\n", sizeof(tag));
    printf("size of [tag[0]] = %d\n", sizeof(tag[0]));
    printf("size of [tag[1]] = %d\n", sizeof(tag[1]));
    printf("size of [tag[2] = %d\n", sizeof(tag[2]));
    printf("size of [tag[3] = %d\n", sizeof(tag[3]));
    printf("size of [tag[4] = %d\n", sizeof(tag[4]));
    printf("size of a[5] = %d\n", sizeof(a[5]));
    printf("size of [tag[10] = %d\n", sizeof(tag[10]));
} 


