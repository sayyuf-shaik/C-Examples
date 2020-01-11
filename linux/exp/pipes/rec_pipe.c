#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <string.h>

int main ( int argc , char *argv[] )
{
    
    int pipefd[2];
    char buf;
    char *str = "/tmp/my_pipe";
    
    /*if ( mkfifo ( str , 0660 )  == -1 ) {
        perror ( "pipe" );
        exit ( EXIT_FAILURE );
    }*/

    fd = open ( str , O_WRONLY );
    if ( fd == - 1 ) {
        perror ( "opening file \n");
        exit ( EXIT_FAILURE );
    } 

       // close ( pipefd [0] ); /*close the unused reading end */ 
        write ( str , argv[1], strlen ( argv[1] ) ); /* write into pipe whatever data that is given in command line */
        //close ( pipefd[1] ); /* close the writing end of the pipe */

        //exit ( EXIT_SUCCESS ) ;
    

    return 0;
}
