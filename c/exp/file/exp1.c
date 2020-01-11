#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
int main ( void )
{
    int file_des;
    file_des = creat( "sample.txt",0700);
    printf("%d",file_des);
    if ( file_des < 0 )
    {
        printf("file creation failed");
    }
    else
    {
        write ( file_des, "hello world" );
        close ( file_des ); 
    }
    return 0;
}

