#include <stdio.h>
#include <unistd.h>
int main ( void ) 
{
    char buf;
    int fd;

    fd = open( "sample.txt" , O_CREAT | O_WRONLY );
    if ( fd < 0 ) {
        perror("open");
        exit(1);
    }
    while ( read ( 0 , buf , 1 ) > 0 ) {
        write ( fd , buf , 1 );
    } 







