#include <stdio.h>

struct __attribute__( ( __packed__ ) ) union_name {
    long long int a:36; // 1 word + 4 bits
    // four bits padding
    char  b:7;//
    char c;
    int d;
    long long int e;
    int f;
    long long int g;
    int h;
}union_var;

int main ( void ) 
{
    printf ( "%d", sizeof ( union_var ) );
    return 0;
}
