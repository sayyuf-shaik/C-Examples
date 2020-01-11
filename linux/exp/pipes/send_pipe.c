#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <string.h>
#include <fcntl.h>

int main ( int argc , char *argv[] )
{
    
    int pipefd[2];
    char buf;
    char *str = "/tmp/my_pipe";
    
    if ( mkfifo ( str , 0660 )  == -1 ) {
        perror ( "pipe" );
        exit ( EXIT_FAILURE );
    }

        //close ( pipefd [0] ); /*close the unused reading end */ 
        //write ( pipefd[1] , argv[1], strlen ( argv[1] ) ); /* write into pipe whatever data that is given in command line */
        //close ( pipefd[1] ); /* close the writing end of the pipe */
       
     fd = open ( fd , O_RDONLY );
     if ( fd == -1 ) {
         perror ( "opening failed \n");
         exit ( EXIT_FAILURE );
    while ( read ( fd , &buf , 1 ) > 0 )
        write ( 1 , buf , 1 );

    close ( fd );

        
    

    return 0;
}
