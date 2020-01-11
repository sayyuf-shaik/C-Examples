#include <stdio.h>
#include <mqueue.h>
#include <time.h>
#include <stdlib.h>
#define QUEUE_NAME "/mq"
#define MAX_MESSAGES 10
#define MAX_MSG_SIZE 256
#define QUEUE_PERM 0660
int main ( void ) 
{
    mqd_t q;
    int status;
    char *msg;
    msg = ( char * ) malloc ( sizeof ( char ) * MAX_MSG_SIZE );

    q = mq_open ( QUEUE_NAME , O_RDWR ) ;
    while ( 1 ) {
        printf ( "Enter the message :\n");
        fgets ( msg , MAX_MSG_SIZE , stdin );

        if ( mq_send ( q , msg , MAX_MSG_SIZE ,0) == -1 ) {
         printf ( "sending is failed \n");
         exit( EXIT_FAILURE );
    }
   }
    if ( mq_close ( q ) == -1 ) {
        printf ( "closing Error " );
        exit ( EXIT_FAILURE );
    }
    return 0;
}
