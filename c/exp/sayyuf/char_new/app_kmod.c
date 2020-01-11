#include <stdio.h>
#include <fcntl.h>

int main ( void )
{
    int fd;
    fd = open("/dev/myChar",O_RDWR);
    if (fd < 0)
        perror("Unable to open the device");
    else
        printf("File opened Sucessfully %d\n",fd);
    close(fd);
    return 0;
}
