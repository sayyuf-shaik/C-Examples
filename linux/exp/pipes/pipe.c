#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <string.h>
int main ( int argc , char *argv[] )
{
    pid_t pid;
    int pipefd[2];
    char buf;
    char *str = "\nMESSAGE RECEIVED\n";

    if ( pipe ( pipefd ) == -1 ) {
        perror ( "pipe" );
        exit ( EXIT_FAILURE );
    }
    pid = fork();
    if ( pid > 0 ) {
        printf( "parent process\n");

        close ( pipefd [0] ); /*close the unused reading end */ 
        write ( pipefd[1] , argv[1], strlen ( argv[1] ) ); /* write into pipe whatever data that is given in command line */
        close ( pipefd[1] ); /* close the writing end of the pipe */

//        wait ( NULL ); /* waits for the child to execute */ 
        exit ( EXIT_SUCCESS ) ;//terminates the process and returns to init
    }
    else if ( pid == 0 ) {
        printf("child process\n");
        close ( pipefd [ 1 ] ); /* close the unused write end */ 

        while ( read ( pipefd[0], &buf , 1 ) > 0 )
            write ( 1 , &buf , 1 );
            /*printf ( "pipe = %c", buf );*/

        write ( 1 , str ,strlen(str) );
        close ( pipefd[0]); /* closing the reading end of the pipe */
        exit( EXIT_SUCCESS );/* kills the calling process */
    }
    else
        printf("FORK IS FAILED\n");

    return 0;
}
