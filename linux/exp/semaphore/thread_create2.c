#include <stdio.h>
#include <semaphore.h>
#include <pthread.h>
int c;
int j;
sem_t sem;
int i;
void *thread_fun ( void *unused )
{

        if ( j == 0 ) {
    while(  c < 100  ) {
    sem_wait(&sem);
        c++;
        j = 1;
    sem_post(&sem);
    }
    }
    //printf("%d\n",);

    return NULL;
}
 
void *thread2( void *some ) 
{     
        if ( j == 1 ) {
        while ( c <  100 ) {
        sem_wait ( &sem );
        printf("%d\n",c);
        j = 0;
        sem_post ( &sem );
        }
    }
    
}

int main( void )
{
    int status;
    pthread_t pth_id;
    pthread_t pth_id1;
    pthread_t pth_id2;
    pthread_t pth_id3;
    if( status = sem_init( &sem, 0, 1) != 0 ) {
        printf("SEM_INIT IS FAILED!!!");
        exit(0);
    }
    pthread_create ( &pth_id,NULL,&thread_fun,NULL);
    //pthread_join ( pth_id,NULL );
    pthread_create ( &pth_id1,NULL,&thread2,NULL);
    //pthread_join ( pth_id1,NULL );
    //pthread_create ( &pth_id2,NULL,&thread_fun,NULL);
    //pthread_create ( &pth_id3,NULL,&thread_fun,NULL);
   /* while ( i < 100 ) {
    sem_wait(&sem);
        printf(" %d ",i);
        i++;
    sem_post(&sem);
    }*/
    //getchar();
    pthread_exit(NULL);
    return 0;
}

