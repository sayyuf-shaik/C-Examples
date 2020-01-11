#include <stdio.h>
#include <mqueue.h>
#include <time.h>
#include <stdlib.h>
#define QUEUE_NAME "/mq"
#define MAX_MESSAGES 10
#define MAX_MSG_SIZE 256
#define QUEUE_PERM 0660
mqd_t q;
void *thread_receive ( void *p )
{   
     printf ("receiving:");
     char *msg = NULL;
     msg = ( char * ) malloc ( sizeof(char) * MAX_MSG_SIZE );
     
     mq_receive( q , msg , MAX_MSG_SIZE , NULL );
     printf("%s",msg);

}

void *thread_send ( void *p ) 
{
    printf ("sending:");
    char *msg = NULL;
    msg = ( char * ) malloc ( sizeof(char) * MAX_MSG_SIZE );
    fgets ( msg , MAX_MSG_SIZE , stdin );
    mq_send( q , msg , MAX_MSG_SIZE , 0 );
    printf("%s",msg);
}

int main ( void ) 
{
    pthread_t thid;
    pthread_t thid2;
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
    do {
    fgets ( msg , MAX_MSG_SIZE , stdin );
    //choice = atoi(msg);
    
    if ( pthread_create ( &thid , NULL , &thread_receive , ( void * ) msg )  !=0 ) {
        perror ( "thread_create");
    }
    if ( pthread_create ( &thid2 , NULL , &thread_send , ( void * ) msg )  !=0 ) {
        perror ( "thread_create");
    }
    
    } while ( choice != 0 );

       if ( mq_close ( q ) == -1 ) {
        printf ( "closing Error " );
        exit ( EXIT_FAILURE );
    }
    pthread_exit ( NULL );
    return 0;
}
