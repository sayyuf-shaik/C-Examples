#include <stdio.h>
#include <semaphore.h>
#include <pthread.h>
int c;
sem_t sem;
int i;
void *thread_fun ( void *unused )
{
    sem_wait(&sem);
    while( i < 100 ) {
        i++;
    }
    c++;

        printf("%d\n",c);

    sem_post(&sem);
    return NULL;
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

    pthread_create ( &pth_id1,NULL,&thread_fun,NULL);
    pthread_create ( &pth_id2,NULL,&thread_fun,NULL);
    pthread_create ( &pth_id3,NULL,&thread_fun,NULL);
    while ( i < 100 ) {
        printf(" %d ",i);
        i++;
    }
    //getchar();
    pthread_exit(NULL);
    return 0;
}

