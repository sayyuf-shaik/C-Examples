#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
int main ( void )
{
    int file_des;
    char *ptr = malloc (sizeof(char)*256);
    //file_des = open( "sample.txt",0700);
    printf("%d",file_des);
    if ( file_des < 0 )
    {
        printf("file opening failed");
    }
    else
    {
        read ( file_des, ptr, 5 );
        printf("---->%s",ptr);
       // close ( file_des ); 
    }
    return 0;
}

