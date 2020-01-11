#include <stdio.h>
#include <mqueue.h>
#include <time.h>
#include <stdlib.h>
#define QUEUE_NAME "/mq2"
#define MAX_MESSAGES 100
#define MAX_MSG_SIZE 250
#define QUEUE_PERM 0660
int main ( void ) 
{
    mqd_t q;
    int i;
    int status;
    char *msg;
    msg = ( char * ) malloc ( sizeof ( char ) * MAX_MSG_SIZE );
    
    struct mq_attr attr;
    attr.mq_flags = 0;
    attr.mq_maxmsg = MAX_MESSAGES;
    attr.mq_msgsize = MAX_MSG_SIZE;
    attr.mq_curmsgs = 0;
    if ( ( q = mq_open ( QUEUE_NAME , O_RDWR | O_CREAT , QUEUE_PERM , &attr )) == -1 ) {
            perror("opening fail");
        exit( EXIT_FAILURE );
            }
    i = 0;
   while ( i < 100 ) {
    printf ( "Enter the message :\n");
    *msg = ( char  ) i;
    
    if ( mq_send ( q , msg , MAX_MSG_SIZE ,0) == -1 ) {
        perror( "sending is failed ");
        exit( EXIT_FAILURE );
    } i++;
   }

    if ( mq_close ( q ) == -1 ) {
        printf ( "closing Error " );
        exit ( EXIT_FAILURE );
    }
/*   if ( (  mq_unlink (QUEUE_NAME ) == -1 )) {
	perror("unlink");
}*/
    return 0;
}
