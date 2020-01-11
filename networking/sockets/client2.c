#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <arpa/inet.h>

int main ( int argc , char *argv[] ) 
{
    char *buf = NULL;
    unsigned int port_no = atoi ( argv[2] );
    
    buf = ( char * ) malloc ( sizeof(char) * 256 );
    struct hostent *host_id;
    host_id = argv[1];
    int socket_fd;
    socket_fd = socket ( AF_INET , SOCK_STREAM , 0  );
    if ( socket_fd == -1 ) {
        perror ( "socket:");
        exit(EXIT_FAILURE);
    }

    /* SOCKET is a */

    printf("%s",argv[1]);

    struct sockaddr_in server_address;

    server_address.sin_family = AF_INET;
    server_address.sin_port = htons ( 5543);
    //server_address.sin_addr.s_addr = inet_addr ( *( argv + 1 ));

    if ( (connect ( socket_fd , ( struct sockaddr *)&server_address , sizeof(struct sockaddr_in) ) ) == -1 ) 
    {
        perror ( "conect");
        exit(EXIT_FAILURE);
    }
   // while ( 1 ) {
    #if 0
    if ( ( recv ( socket_fd , buf , 14 , 0) ) == -1 ) {
        perror ( "receiving");
        exit ( EXIT_FAILURE );
    }
    #endif

    #if 1
    printf("The message:");
    fgets ( buf , 256 , stdin );
    //*buf = "shaik";
    write (socket_fd , buf , 256 );
    //}
    #endif
    
    printf("%s",buf);
    close (socket_fd);
    
    return 0;

}
     
    

