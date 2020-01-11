#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#define BUF_SIZE 256

int main ( void ) 
{
    int socket_fd;
    int size;
    char *buf = NULL;
    buf = ( char * ) malloc ( sizeof(char) * BUF_SIZE );
    socket_fd = socket ( PF_INET , SOCK_DGRAM , IPPROTO_UDP );
    if ( socket_fd == -1 ) {
        perror ( "socket");
        exit ( 1);
    }

    struct sockaddr_in server_addr;

    server_addr.sin_family = PF_INET;
    server_addr.sin_port = htons ( 5566 );
    server_addr.sin_addr.s_addr = INADDR_ANY;


    size = sizeof(struct sockaddr_in);

    if ( bind ( socket_fd , ( struct sockaddr * )&server_addr , sizeof(server_addr)) == -1 ) {
        perror("bind");
        exit(1);
    }
    if ( recvfrom ( socket_fd , buf , BUF_SIZE , 0 , ( struct sockaddr * ) &server_addr , &size ) == -1 ) {
        perror("receiving");
        exit(1);
    }

    printf("%s",buf);
    __fpurge(stdin);
    printf("Enter the meassge");
    fgets(buf,256,stdin);


    if ( sendto ( socket_fd , buf , BUF_SIZE , 0 , ( struct sockaddr * ) &server_addr , size ) == -1 ) {
        perror("sending");
    }
    if ( close ( socket_fd ) == -1 ) {
        perror ( "close" );
        exit( 1 );
    }

    return 0;
}


