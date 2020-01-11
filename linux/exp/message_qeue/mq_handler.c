#include <stdio.h>
#include <mqueue.h>
#include <time.h>
#include <stdlib.h>
#define QUEUE_NAME "/mq2"
#define MAX_MESSAGES 100
#define MAX_MSG_SIZE 250
#define QUEUE_PERM 0660
mqd_t q;
int main ( void ) 
{
    pid_t pid;
    int status;
    char *msg;
    int i = 0;
    struct mq_attr attr;
    attr.mq_flags = 0;
    attr.mq_maxmsg = MAX_MESSAGES;
    attr.mq_msgsize = MAX_MSG_SIZE;
    attr.mq_curmsgs = 0;
    msg = ( char * ) malloc ( sizeof ( char ) * MAX_MSG_SIZE );

    if ( ( q = mq_open ( QUEUE_NAME , O_RDWR  , QUEUE_PERM , NULL ) ) == -1 ) {
        printf("open failed");
        exit (EXIT_FAILURE); 
    }
    printf ( "the message :\n");

    pid = fork();  
   //while ( i < 100 ) {
    if ( pid > 0 ) {      /* parent process will pick even */ 
        int number;
        int i = 0;
        char *buf;
        buf = ( char * ) malloc ( sizeof ( char ) * MAX_MSG_SIZE );
        while ( i < 50 ) {
        if ( mq_receive( q , msg , MAX_MSG_SIZE , NULL ) == -1 ) {
            printf ( "sending is failed \n");
            //exit( EXIT_FAILURE );
        }
        number = *( (int *) ( msg ) );
        printf("number which came in parent : %d\n",number);
        if ( number % 2 == 0 ) {
                    printf(" even number %d\n",number);
 	    i++;
         }
                    
        else {
             
            *buf = ( char ) number; 
            if ( mq_send ( q , buf , MAX_MSG_SIZE ,0) == -1 ) {
                printf ( "sending is failed \n");
               // exit( EXIT_FAILURE );
        
            }
            
        } 
    }
        
    }

    else if ( pid == 0 ) {   /*child will pick odd */
        int number;
        int i = 0;
        char *buf;                                                              
        buf = ( char * ) malloc ( sizeof ( char ) * MAX_MSG_SIZE );
       while ( i < 50 ) {
        if ( mq_receive( q , msg , MAX_MSG_SIZE , NULL ) == -1 ) {              
            printf ( "sending is failed \n");                                   
            //exit( EXIT_FAILURE );                                               
               
        }  
            number =  *( ( int * ) ( msg ));
            
            printf("number which came child: %d\n",number);
            if ( number % 2 != 0)  {      
                    printf("odd number %d\n",number);
  			i++;
	}
            else {
            *buf = ( char ) number;
            if ( mq_send ( q , buf , MAX_MSG_SIZE ,0) == -1 ) {
                printf ( "sending is failed \n");
                //exit( EXIT_FAILURE );
            }
            } 
            
            
       }

                }




    if ( mq_close ( q ) == -1 ) {
        printf ( "closing Error " );
        exit ( EXIT_FAILURE );
    }
    return 0;
}
