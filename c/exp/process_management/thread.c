#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/syscall.h>
#include <pthread.h>
#define _GNU_SOURCE
int *a = ( int * ) malloc ( sizeof(int) );
*a = 5;
int fd;
void *thread_function ( void *p ) 
{
    int a = 10;
    pid_t ttid;
    ttid = syscall(SYS_gettid);
    printf("I'm in thread %d\n",a);
    printf("PID  = %d\n", getpid());
    printf("TID  = %d\n", ttid);
     ioctl(fd,1,&a);

}
int main( void ) 
{
    int status;
    int a = 10;
    pid_t ttid;
    pthread_t th_id;
    fd = open("/dev/myChar",O_RDWR);
    if (fd > 0) {
        status = pthread_create(&th_id,NULL,thread_function,NULL);
        if ( status != 0 )
        {
            printf("Thread creation failed:%s\n",strerror(status));
        }
        ttid = syscall(SYS_gettid);
        printf("I'm in process %d\n",a);
        printf("PID  = %d\n", getpid());
        printf("TID  = %d\n",ttid );
        ioctl(fd,1,&a);
    }
    else {
        perror ("Unable open the device!!!");
        exit(0);
    }
        //getchar();
        pthread_exit(NULL);
    return 0;
}

