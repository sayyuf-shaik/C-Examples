#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <pthread.h>
int fd;
pthread_mutex_t mut = PTHREAD_MUTEX_INITIALIZER;
struct parameters{
    char name;
    int count;
};
void *print_c ( void *parameters )
{
   pthread_mutex_lock(&mut);
   struct parameters *param = ( struct parameters *) ( parameters );
   int i;
  // ioctl(fd,1,&print_c);
   for ( i = 0;i< param -> count ;i++)
       fputc(param -> name,stdout);
   pthread_mutex_unlock(&mut);
   return NULL;
}
int main ( void ) 
{
    pthread_t th_id1;
    pthread_t th_id2;
    struct parameters param1;
    struct parameters param2;
    //fd = open("/dev/myChar",O_RDWR);
    /*if ( fd < 0 )
    {
        printf("Error in opening device");
        exit(0);
    }*/
    param1.name = 'a';
    param2.name = 'b';
    param1.count = 30000;
    param2.count = 20000;
    //ioctl(fd,1,&print_c);
    pthread_mutex_init(&mut,NULL);
    pthread_create(&th_id1,NULL,&print_c,&param1);

    //pthread_join(th_id1,NULL);
    pthread_create(&th_id2,NULL,&print_c,&param2);
    
    //pthread_join(th_id2,NULL);
    pthread_mutex_destroy(&mut);
    pthread_exit(NULL);
    return 0;
}
    

    
