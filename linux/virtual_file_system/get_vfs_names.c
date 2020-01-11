#include <stdio.h>
#include <linux/unistd.h>

static _syscall3 ( int, sysfs, int ,option, unsigned int, fsindex, char *, buf );


static int sysfs1 ( int i ) 
{
    return sysfs ( i, 0, NULL );
}

int main ( void )
{
    int i;
    int total;
    char buf[100];

    total = sysfs1(3);

    if ( total == -1 ) {
        perror ( "sysfs(3)" );
        exit(1);
    }

    for ( i = 0; i < total ; i++ ) {
        if ( sysfs ( 2 , i, buf ) ) {
            perror ( "sysfs(2)" );
            exit(1);
        }
        printf("%2d: %s\n", i ,buf );
    }
    return 0;
}
