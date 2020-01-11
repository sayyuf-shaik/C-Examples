#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <string.h>
#include <fcntl.h>
int main ( int argc , char *argv[] )
{
    
    int fd;
    char *buf = NULL;
    buf = ( char * ) malloc ( sizeof ( char ) * 256 ) ;
    char *str = "/tmp/my_pipe1";
    
/*    if ( mkfifo ( str , 0660 )  == -1 ) {
        perror ( "pipe" );
        exit ( EXIT_FAILURE );
    }*/

        //close ( pipefd [0] ); /*close the unused reading end */ 
        //write ( pipefd[1] , argv[1], strlen ( argv[1] ) ); /* write into pipe whatever data that is given in command line */
        //close ( pipefd[1] ); /* close the writing end of the pipe */
       
     fd = open ( str , O_RDONLY );
     if ( fd == -1 ) {
         perror ( "opening failed \n");
         exit ( EXIT_FAILURE );
     }
    read ( fd , buf , 256 ); 
        //write ( STDOUT_FILENO , buf , 256 );
        //
    printf("%s",buf);

    close ( fd );

        
    

    return 0;
}
