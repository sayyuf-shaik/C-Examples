#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <arpa/inet.h>
#define BUF_SIZE 256
int main ( int argc , char *argv[] ) 
{
    char *buf = NULL;
    char *buf2 = NULL;
    unsigned int port_no = atoi ( argv[2] );
    
    buf = ( char * ) malloc ( sizeof(char) * BUF_SIZE );
    buf2 = ( char * ) malloc ( sizeof(char) * 1024 );
    struct hostent *host_id;
    host_id = argv[1];
    int socket_fd;
    socket_fd = socket ( AF_INET , SOCK_STREAM , 0  );
    if ( socket_fd == -1 ) {
        perror ( "socket:");
        exit(EXIT_FAILURE);
    }

    /* SOCKET is a */

    struct sockaddr_in server_address;

    server_address.sin_family = AF_INET;
    server_address.sin_port = htons ( 5543 );
    server_address.sin_addr.s_addr = inet_addr("172.16.5.194");

    if ( (connect ( socket_fd , ( struct sockaddr *)&server_address , sizeof(struct sockaddr_in) ) ) == -1 ) 
    {
        perror ( "conect");
        exit(EXIT_FAILURE);
    }
    printf("conect is done ");
    //while ( 1 ) {
    #if 0
    if ( ( recv ( socket_fd , buf , BUF_SIZE , 0) ) == -1 ) {
        perror ( "receiving");
        exit ( EXIT_FAILURE );
    }
    #endif

    #if 0
    FILE *fp = NULL;
    fp = fopen("sample2.txt","w+");
    //printf("The message:");
    //fgets ( buf , 256 , stdin );
    //*buf = "sayyuf";
    write (socket_fd , buf , 256 );
    int i = 0;
    while ( *( buf + i ) != '\0' ) 
       i++;
    fwrite(buf , 1 , i , fp );


    
    #endif

    #if 1
    
    printf ( "Enter the message:");                                           
        fgets ( buf ,  256 , stdin );
        if ( ( send ( socket_fd , buf , 256 , 0) ) == -1 ) {                         
                perror ( "sending");
                exit(EXIT_FAILURE);
        }
    printf("%s",buf);
    #endif
   // }
   //getchar();
    close (socket_fd);
    
    return 0;

}
     
    

