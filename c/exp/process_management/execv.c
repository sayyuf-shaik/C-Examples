#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main ( int argc, char *argv[] ) 
{
    int i;
    int a =25;
    printf("PID in exec = %d\n", getpid());
    for ( i = 1;i<argc;i++) {
     if(  execvp(argv[i],argv) == -1 ) {
         printf("EXEC FAILED!!!\n");
         exit(0);
     }
    }
    printf("Sayyuf:");
    return 0;
}


