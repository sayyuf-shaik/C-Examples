#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <pthread.h>
int fd;
struct parameters{
    char name;
    int count;
};
void *print_c ( void *parameters )
{
   struct parameters *param = ( struct parameters *) ( parameters );
   int i;
  ioctl(fd,1,&i);
   for ( i = 0;i< param -> count ;i++)
       fputc(param -> name,stdout);
   return NULL;
}
int main ( void ) 
{
    int a;
    a = 10;
    pthread_t th_id1;
    pthread_t th_id2;
    struct parameters param1;
    struct parameters param2;
    /*fd = open("/dev/my_kernel",O_RDWR);
    if ( fd < 0 )
    {
        printf("Error in opening device");
        exit(0);
    }*/
    param1.name = 'a';
    param2.name = 'b';
    param1.count = 30;
    param2.count = 20;
    ioctl(fd,1,&a);
    pthread_create(&th_id1,NULL,&print_c,&param1);

    //pthread_join(th_id1,NULL);
    //pthread_detach(th_id1);
    pthread_create(&th_id2,NULL,&print_c,&param2);
    
    //pthread_join(th_id2,NULL);
    //pthread_detach(th_id2);
    pthread_exit(NULL);
    return 0;
}
    

    
