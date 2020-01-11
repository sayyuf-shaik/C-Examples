#include <stdio.h>
#include <mqueue.h>
#include <time.h>
#include <stdlib.h>
#define QUEUE_NAME "/mq1"
#define MAX_MESSAGES 10
#define MAX_MSG_SIZE 250
#define QUEUE_PERM 0660
mqd_t q;
char *msg;
/* this thread only receive the 0 priority messages */
void *thread_receive ( void *p )
{   
     int msg_prio; /* to store the priority */
     while ( 1 ) { 
     char *buf = NULL;
     buf = ( char * ) malloc ( sizeof(char) * MAX_MSG_SIZE );
     
     mq_receive ( q , buf , MAX_MSG_SIZE ,&msg_prio  );
        if ( msg_prio == 1 ) // if received msg has priority is 1 then send back to qeue 
              mq_send ( q , buf , MAX_MSG_SIZE , 1 );
        else
            printf("%s",buf);
     free(buf);
     }

}


int main ( void ) 
{
    pthread_t thid;
    int choice;
    char *msg;
    struct mq_attr attr;
    attr.mq_flags = 0;
    attr.mq_maxmsg = MAX_MESSAGES;
    attr.mq_msgsize = MAX_MSG_SIZE;
    attr.mq_curmsgs = 0;
    msg = ( char * ) malloc ( sizeof ( char ) * MAX_MSG_SIZE );
    
    if ( ( q = mq_open ( QUEUE_NAME , O_RDWR | O_CREAT , QUEUE_PERM , &attr ) ) == -1 ) {
        printf("open failed");
        exit (EXIT_FAILURE); 
    }
    
    /* thread create to receive the message */    
    if ( pthread_create ( &thid , NULL , &thread_receive , ( void * ) msg )  !=0 ) {
        perror ( "thread_create");
    }
        while ( 1 ) {
        fgets ( msg , MAX_MSG_SIZE , stdin );
        mq_send( q , msg , MAX_MSG_SIZE , 1 );
        }
      

       if ( mq_close ( q ) == -1 ) {
        printf ( "closing Error " );
        exit ( EXIT_FAILURE );
    }
    pthread_exit ( NULL );
    return 0;
}
