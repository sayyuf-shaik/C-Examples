#if 0
int main ( void )
{
    char *argv[] = {"ab","cd","ef","gh","ij","kl"};
    f ( argv );
    return 0;
}
void f ( char **p ) 
{
    char *t;
    t = ( p += sizeof( int ) ) [-1];
    printf ( "%s",t);
}
#endif
#if 0
int main()
{
    short char e = 5;
    char a = 0.5;
    unsigned char short b = 6;
    signed float f = 5;
    const volatile int p = 5;
    signed int i, argc;
    i = argc = 3;
    char *arg[3] = { "abcde","fghij","klmno"};
    char **argv = arg;
    while ( ++argv, --argc, --i )
        printf("%s\n",*argv);
    return 0;
}
#endif
#if 0
void add ( static a ,static b )
{
    return a + b;
}
int main ( void ) 
{
    int a =4;
    int b = 6;

    add(a,b);
}
#endif
#if 1
#include <stdio.h>
#define MAX 5
int main ( void )
{
    int i;
    int array [MAX];
    for ( i = MAX ; i-- >= 0; ) {
        array [i] = 2;
        printf( "%d\n",array[i] );
    }
    return 0;
}
#endif
