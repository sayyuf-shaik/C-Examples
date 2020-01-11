#include <stdio.h>
typedef int (*INTARRAY) [10];
typedef int INTARR [10];
INTARRAY a;//it creates array of pointers of type int
INTARR b = {1,2,3,4,5};//array
int main()
{
    a = &b;
   // printf ( "\n%d", sizeof(a) ); 
    
    printf ( "\n%d", **a );
    printf ( "\n%d", *((*a+1)));
    printf ( "\n%d", **(a+2) );
    printf ( "\n%d", *(*a+3) );
    printf ( "\n%d", *(*a+4) );
}
