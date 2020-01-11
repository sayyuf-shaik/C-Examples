#include <stdio.h>
#include <unistd.h>
int main( void )
{
    pid_t pid;
    pid = fork();
    if ( pid > 0 )
    {
        printf("PARENT PROCESS\n");
    } 
    else if ( pid == 0 ) {
        printf("CHILD PROCESS\n");
    }
    else {
    perror("FORK FAILED\n");
    }
    return 0;
}


