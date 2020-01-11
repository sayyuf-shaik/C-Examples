#include <stdio.h>
#include <pthread.h>
#define MAX 100
int a;
int i = 0;
int cond = 1;
pthread_mutex_t mut = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t con = PTHREAD_COND_INITIALIZER;
void *thread_fun ( void *unused )
{
    while ( i <= MAX ) {
        pthread_mutex_lock(&mut);
        //printf("THread1\n");
        if( i % 2 == 0) {
               printf("Even = %d\n", i );
               i++;
        }
    }
        if( i > 100 )
            exit(0);
            pthread_cond_wait(&con,&mut);
            pthread_cond_broadcast(&con);
        
        pthread_mutex_unlock(&mut);
      

   
    return NULL;
}

void *print ( void *p )
{
    while ( i <= MAX ) {
        //printf("THread2\n");

            pthread_mutex_lock(&mut);
            if ( i % 2 != 0 ) {
            printf("Odd = %d\n", i );
            i++;

            }
    }
            if ( i > 100 )
                exit(0);

                pthread_cond_wait(&con,&mut);
                pthread_cond_broadcast(&con);
            
            pthread_mutex_unlock(&mut);
        

    return NULL;
}

int main( void )
{
    pthread_t pth_id;
    pthread_t pth_id1;
    int count1 = 1;
    int count2 = 2;
    pthread_mutex_init(&mut,NULL);/* Creating a Mutex variable */
    pthread_cond_init(&con,NULL);/* Creating a condition variable */
    pthread_create ( &pth_id,NULL,&thread_fun,NULL);
    pthread_create ( &pth_id1,NULL,&print,NULL);
        
    pthread_mutex_destroy(&mut);
    pthread_cond_destroy(&con);

    pthread_exit(NULL);
    return 0;
}

