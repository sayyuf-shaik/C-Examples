#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#define BUF_SIZE 256
struct my_file {
    char name[50];
    char *buf;
};
int main ( int argc , char *argv[] ) 
{
    struct my_file file;
    file.buf = ( char * ) malloc ( sizeof(char) * BUF_SIZE );
    int socket_fd;
    int new_fd;
    int pos;
    int sock_fd;
    int count=5;
    pid_t pid;
    socket_fd = socket ( AF_INET , SOCK_STREAM , 0  ); /* Creating a socket */
    if ( socket_fd == -1 ) {
        perror("socket");
        exit ( EXIT_FAILURE);
    }
    file.name = argv[1];
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

    if ( ( listen (socket_fd ,1 ) )== -1 ) { 
            perror ( "listening");
            exit(EXIT_FAILURE);
    }
    printf("listen is done\n" );
    //getchar();
    /* listen makes the socket as a passive one for listening the incoming requests which are going to be accepted by the accept()and this will return the new socket fd for that connection */

    if ( (new_fd =  accept ( socket_fd , ( struct sockaddr * ) &server_address , &size) ) == -1 ) {
        perror ( "accept failed");
        exit(EXIT_FAILURE);
    }
    printf("CONNECTION ESTABLISHE %d \n" ,new_fd );
    #if 0
    pid = fork(); // creates the child of server on each request by clients */

    if ( pid == 0 ) { //chlild */
    
   
  

    #endif
    /*printf ( "Enter the message:");
    fgets ( buf ,  256 , stdin );*/

 /*   if ( ( send ( new_fd , buf , 256 , 0) ) == -1 ) {
        perror ( "sending");
        exit(EXIT_FAILURE);
    }*/

    #if 1
    FILE *fp = NULL;

    if ( (fp = fopen ( argv[1] ,"r+" ) ) == NULL ) {
        perror("fopen");
        exit(EXIT_FAILURE);
    }

    fseek ( fp , 0 , SEEK_END );

    pos = ftell(fp);

    rewind(fp);
    fread( buf , 1 , pos , fp );
    
    write ( new_fd , file.buf , pos ); 
    
    #endif

    #if 0 
    fgets(buf,BUF_SIZE,stdin);
    write ( new_fd , buf , BUF_SIZE);
   // while(count--) {
    //if ( recv( new_fd ,buf , 256 , 0) > 0 )
    printf("%s",buf);
   // }
    //fflush(buf);
    
    #endif

    #if 0 
   if ( ( recv ( new_fd , buf , BUF_SIZE , 0) ) < 0 ) { 
      perror ( "receiving");
      exit ( EXIT_FAILURE ); 
   }
   //printf("hi");
   printf("%s",buf);
   //getchar();
    #endif 
    close (new_fd);
   }
    close (socket_fd);
    return 0;

}
     
    

