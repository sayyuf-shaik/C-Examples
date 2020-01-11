/*
 *
 * server program using UDP protocal
 *
 */

#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <stdlib.h>
#define BUF_SIZE 256
int main ( void ) 
{
    int socket_fd;
    char *buf = NULL;
    buf = ( char * ) malloc ( sizeof (char ) * BUF_SIZE );
    socket_fd = socket ( PF_INET , SOCK_DGRAM , IPPROTO_UDP ); 

    if ( socket_fd == -1 ) {
        perror ( "SOCKET");
        exit(1);
    }
    struct sockaddr_in server_addr;

    server_addr.sin_family = PF_INET;
    server_addr.sin_port = htons ( 5566 );
    server_addr.sin_addr.s_addr = inet_addr ( "172.16.5.194");



/*   if ( bind ( socket_fd , ( struct sockaddr * ) &server_addr , sizeof(server_addr) ) == -1 ) {

        perror("BIND");
        exit(1);
    }*/
    
    int addrlen = sizeof(struct sockaddr_in );
    printf ( "Enter the message:");
    fgets ( buf , BUF_SIZE , stdin );

    if ( sendto ( socket_fd , buf , BUF_SIZE , 0, ( struct sockaddr * )&server_addr ,sizeof(struct sockaddr_in) ) == -1 ) {
       perror("sendto");
       exit(1);
    } 
    
   if ( recvfrom( socket_fd , buf , BUF_SIZE , 0 , ( struct sockaddr *)&server_addr , &addrlen ) == -1 ) {

       perror("receiving");
       exit(1);
   }

   printf("MSG:%s",buf);

   if ( close(socket_fd) == -1 ) {
       perror("close");
       exit(1);
   }

   return 0;
}


     
