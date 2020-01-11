#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>

/*struct sc_param {
    int sched_priority; // priority for scheduling
};*/

pthread_attr_t attr;
struct sched_param param;
//thread function

void *thread_fun ( void *param )
{
    printf( "%d\n", pthread_attr_getschedparam ( &attr , param ) );
    printf( "%d\n", pthread_attr_getschedpolicy ( &attr , param ) );
    return NULL;

}

int main ( void )
{   
    pthread_t th_id;
    pthread_t th_id2;
    //initializing the threads
    if ( pthread_attr_init(&attr) != 0 ) {
        printf("Error in Initializing the thread attribute\n");
        exit(0);
    }
    //set the priority
    if ( pthread_attr_setschedparam ( &attr, &param ) != 0 ) {
        printf("Error in Initializing the thread attribute\n");
        exit(0);
    }

    
    //set the policy of the thread
    if ( pthread_attr_setschedpolicy( &attr, SCHED_FIFO ) != 0 ) {
        printf("Error in setting the FIFO policy\n");
        exit(0);
    }

    //creation of thread
    th_id = pthread_create(&th_id,&attr,&thread_fun,NULL);
    //pthread_create(&th_id2,&attr,&thread_fun,NULL);
    pthread_exit(NULL);
    return 0;
}



