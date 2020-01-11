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
    int count = ( int ) unused;
    while ( i <= MAX ) {
        //printf("x");
       // printf("THREAD 1\n");
      if ( count == cond ) { 
        pthread_mutex_lock(&mut);
        if( i % 2 == 0) {
               printf("Even = %d\n", i );
               i++;
        cond++;
        }
        pthread_cond_wait(&con,&mut);
        pthread_mutex_unlock(&mut);
      }

   }
    return NULL;
}

void *print(void *p )
{
    int count = ( int )p;
    while ( i <= MAX ) {
            //printf("y");
        //printf("THREAD 2\n");
        if ( count == cond )
        {

            pthread_mutex_lock(&mut);
            if ( i % 2 != 0 ) {
            printf("Odd = %d\n", i );
            i++;
            cond--;

            }
            }
            pthread_mutex_unlock(&mut);
           pthread_cond_signal(&con);
        }
   // }

    return NULL;
}

int main( void )
{
    //int i = 0;
    pthread_t pth_id;
    pthread_t pth_id1;
    int count1 = 1;
    int count2 = 2;
    pthread_mutex_init(&mut,NULL);
    pthread_cond_init(&con,NULL);
    //for ( i = 0 ;i < 50; i++ ) {
    pthread_create ( &pth_id,NULL,&thread_fun,( void * )count1);
    pthread_create ( &pth_id1,NULL,&print,(void *)count2);
    //}
    //while( i < 100 ) {
      //  printf("%d\n",a);
        
    //}
    //sleep(1);
    pthread_mutex_destroy(&mut);
   pthread_cond_destroy(&con);

    pthread_exit(NULL);
    return 0;
}

