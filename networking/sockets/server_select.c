#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
int main ( void ) 
{
    char *buf = NULL;
    buf = ( char * ) malloc ( sizeof(char) * 256 );
    int socket_fd;
    int new_fd;
    int pos;
    pid_t pid;
    socket_fd = socket ( AF_INET , SOCK_STREAM , 0  ); /* Creating a socket */
    if ( socket_fd == -1 ) {
        perror("socket");
        exit ( EXIT_FAILURE);
    }

    /*
     *
     * AF_INET = 
     * SOCK_STREAM = data transfer in streams uses tcp protocol 
     * SOCK_DATAGRAM = uses UDP protocol
     */

    /*
     *
     * Structure which has addres
     *
     */

    struct sockaddr_in server_address;

    server_address.sin_family = AF_INET;
    server_address.sin_port = htons ( 5543 );
    server_address.sin_addr.s_addr = INADDR_ANY;
    /* INADDR_ANY any incoming interface */
    /* htons() converts little endian to bigendian */

    /*connect ( socket_fd , ( struct sockaddr_in *)&server_address , sizeof(struct sockaddr_in) );*/
    int size = sizeof(server_address);
    if ( ( bind ( socket_fd , ( struct sockaddr * )&server_address , size) ) == -1 ) {
        perror ( "binding is failed");
        exit(EXIT_FAILURE);
    }

    /* Will Bind the address of this server adrress to that socket */

    if ( ( listen (socket_fd ,50 ) )== -1 ) { 
            perror ( "listening");
            exit(EXIT_FAILURE);
    }

    /* listen makes the socket as a passive one for listening the incoming requests which are going to be accepted by the accept()and this will return the new socket fd for that connection */

    while(1) {


    if ( (new_fd =  accept ( socket_fd , ( struct sockaddr * ) &server_address , &size) ) == -1 ) {
        perror ( "accept failed");
        exit(EXIT_FAILURE);
     }
    #if 1
    pid = fork(); // creates the child of server on each request by clients */

    if ( pid == 0 ) { //chlild */
    
   
  

    #endif
    /*printf ( "Enter the message:");
    fgets ( buf ,  256 , stdin );*/

 /*   if ( ( send ( new_fd , buf , 256 , 0) ) == -1 ) {
        perror ( "sending");
        exit(EXIT_FAILURE);
    }*/

    #if 0
    FILE *fp = NULL;

    if ( (fp = fopen ( "sample.txt" ,"r+" ) ) == NULL ) {
        perror("fopen");
        exit(EXIT_FAILURE);
    }

    fseek ( fp , 0 , SEEK_END );

    pos = ftell(fp);

    rewind(fp);
    
    write ( new_fd , fp , pos ); 
    
    #endif

    #if 1 
    //write ( new_fd , buf , 256);
    while(1) {
    recv( new_fd ,buf , 256 , 0); 
    printf("%s",buf);
    }
    #endif
    close (new_fd);
    exit(0);
    }
    }
    close (socket_fd);
    return 0;

}
     
    

