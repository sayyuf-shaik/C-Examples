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
    //    getchar();
        printf("CHILD PROCESS IS EXITED \n");

        
    }
    else if ( pid == 0 ) {
        printf("PID in exec = %d\n", getpid());                                     
           /* for ( i = 1;i<argc;i++) {                                                   
            if(  execvp(argv[i],argv) == -1){                                        
                printf("EXEC FAILED!!!\n");                                                                exit(0);                                                               
                        }                                                                          
                        }  */
        getchar();
        printf("CHILD PROCESS %d\n",getpid());
    }
    else
        printf("FORK IS FAILED\n");

    return 0;
}


