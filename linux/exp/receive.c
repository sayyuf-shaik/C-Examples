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
    printf ( "Enter your choice :\n");
    fgets ( msg , MAX_MSG_SIZE , stdin );
    choice = atoi(msg);
    
    switch ( choice ) {

        case 1: printf ("receiving:");
                if ( mq_receive( q , msg , MAX_MSG_SIZE , NULL ) == -1 ) {
                printf ( "sending is failed \n");
                exit( EXIT_FAILURE );
                }           
                printf("%s",msg);
                break;

        case 2: printf ( "sending:");
                fgets ( msg , MAX_MSG_SIZE , stdin );
                if ( mq_send ( q , msg , MAX_MSG_SIZE ,0) == -1 ) {
                printf ( "sending is failed \n");
                exit( EXIT_FAILURE );
                } 
                break;
                
       }
    } while ( choice != 0 );

       if ( mq_close ( q ) == -1 ) {
        printf ( "closing Error " );
        exit ( EXIT_FAILURE );
    }
    return 0;
}
