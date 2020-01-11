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
    buf = ( char * ) malloc ( sizeof(char) * 256 ) ;
    char *str = "/tmp/my_pipe1";
    
   if ( mkfifo ( str , 0660 )  == -1 ) {
        perror ( "mkinfo" );
        exit ( EXIT_FAILURE );
    }

    fd = open ( str ,O_WRONLY  );//opening the /tmp/my_pipe1 filr 
    if ( fd == - 1 ) {
        perror ( "opening file ");
        exit ( EXIT_FAILURE );
    } 

      if ( ( fgets ( buf , 256 , stdin ) == NULL )) {
             perror("fgets:");
            exit ( EXIT_FAILURE );
            }

        write ( fd , buf, 256); /* write into pipe whatever data that is given in command line */

    
    close ( fd );
    if ( unlink(str) == -1 ) {
        perror ( "unlink:");
    }
    return 0;
}
