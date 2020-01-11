#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
int main ( int argc, char * argv[] )
{
    pid_t pid;
    int i=0;
    pid = fork();
    if ( pid > 0 ) {
        printf("PARENT PROCESS %d\n",getpid());
        printf("CHILD PROCESS IS EXITED \n");
        //wait(NULL);

        
    }
    else if ( pid == 0 ) 
    {
        printf("CHILD PROCESS %d\n",getpid());
        execvp(argv[0],argv);
        printf("CHILD PROCESS AFTER EXECV");
    }
    else
        printf("FORK IS FAILED\n");

    printf("this is main process");
    getchar();

    return 0;
}


