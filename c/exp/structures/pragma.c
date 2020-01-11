#include <stdio.h>
#if 1
int main ( void )
{
    #pragma pack (push, 1) 
    struct tag {
        int a;
        char b;
        char c;
        int abc;
    };
    #pragma pack (pop)
    struct tag1 {
        int x;
        char y;
        char z;
        int w;
    };
    struct tag e;
    struct tag1 s;
    e.a = 0xffffffff;
    e.b = 'A';
    e.c = 'C';
    e.abc = 0xffffffff;
    printf (" %d", sizeof (e));
    printf (" %d", sizeof (s));
    return 0;
}

#endif
#if 0
int main ( void )
{
    struct tag {
    int :1;
    char b : 4;
    char c : 3;
    }var;
    var.b = 15;
    var.c = 1;
    printf("size = %d ", sizeof(var) );
    return 0;
}
#endif
  

   
