#include <stdio.h>
#include <pthread.h>
#define MAX 15
int a;
int c = 0;
int cond = 1;
pthread_mutex_t mut = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t con = PTHREAD_COND_INITIALIZER;
void *thread_fun ( void *unused )
{
    //int count = ( int ) unused;
    while ( c <= MAX ) {
        printf("x");
      if ( 1 == cond ) { 
        pthread_mutex_lock(&mut);
        c++;
        cond = 2;
        pthread_cond_wait(&con,&mut);
        pthread_mutex_unlock(&mut);
      }

   }
    return NULL;
}

void *print(void *p )
{
//    int i = 0;
    while ( c <= MAX ) {
            printf("y");
        if ( 2 == cond )
        {

            pthread_mutex_lock(&mut);
            printf("%d\n",c);
            cond = 1;
            pthread_cond_signal(&con);
            pthread_mutex_unlock(&mut);
        }
   // }
}
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
    //pthread_cond_destroy(&con);
    pthread_exit(NULL);
    return 0;
}

