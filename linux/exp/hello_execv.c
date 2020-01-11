#include <stdio.h>
#include <unistd.h>
int main ( void )
{
    int a = 10;
    printf( "PID in hello= %d\n", getpid());
    printf( "Hello World\n");
    //fd = open("dev/myChar",O_RDWR);
    //ioctl(fd,1,&a);
    getchar();
    return 0;
}

