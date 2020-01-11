#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
int global_var = 10;
int ptr = &global_var;
int main( )
{
	int fd;
	fd=open("/dev/my_char",O_RDWR);
	if(fd<0)
		perror("unable to open the device");
	else {
		printf("File opened successfully %d\n",fd);
        
                printf("value = %d", global_var);
                ioctl(fd,1,&global_var);
                printf("value = %d", global_var);
                printf("pid = %d" ,getpid());
}
        getchar();
	close(fd);
	return 0;
}

