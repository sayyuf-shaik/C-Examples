#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
int main ( void ) 
{
    char *buf = NULL;
    buf = ( char * ) malloc ( sizeof(char) * 256 );
    int main_socket;
    int new_socket;
    int pos;
    int sd;
    int number;
    int client_socket[30];
    fd_set readfds; //fds to read multiple clients
    fd_set writefds;//fds to write multiple clients
    pid_t pid;

    puts("How many connections you want");

    scanf ( "%d", number );
    for ( i = 0;i < number; i++) 
        client_socket[i] = 0;

    main_socket = socket ( AF_INET , SOCK_STREAM , 0  ); /* Creating a socket */
    if ( main_socket == -1 ) {
        perror("main socket");
        exit ( EXIT_FAILURE);
    }
     

    //setting master socket to allow multiple connections
    
    if ( setsockapt ( main_socket , SOL_SOCKET , SO_REUSEADDR ) == -1 ) {

        perror("setsockopt");
        exit(EXIT_FAILURE);
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
    if ( ( bind ( main_socket , ( struct sockaddr * )&server_address , size) ) == -1 ) {
        perror ( "binding is failed");
        exit(EXIT_FAILURE);
    }

    /* Will Bind the address of this server adrress to that socket */

    if ( ( listen (main_socket ,50 ) )== -1 ) { 
            perror ( "listening");
            exit(EXIT_FAILURE);
    }

    printf("Waiting for connections:\n");
    
    /* listen makes the socket as a passive one for listening the incoming requests which are going to be accepted by the accept()and this will return the new socket fd for that connection */


    while ( 1 ) {
    
    FD_ZERO ( &readfds );
    // adding the main_socket to set of readfds
    FD_SET ( main_socket , &readfds );

    max_sd = main_socket;
    // add child sockets to set
    for ( i = 0 ; i < 30 ; i++ ) {
        sd = client_socket[i];
     
        //if valid then add to read list
        
        if ( sd > 0 )
           FD_SET (sd , &readfds );

         // highest filedescriptor need by the select function

        if ( sd > max_fd ) {
            max_sd = sd;}
    }


    activity = select( max_sd + 1 , &readfds, &writefds , NULL,NULL);

    if(activity == -1 ) {
        perror("select");
        exit(1);
    }

    if ( FD_ISSET( main_socket , &readfds )) {
	



    if ( (new_socket =  accept ( main_socket , ( struct sockaddr * ) &server_address , &size) ) == -1 ) {
        perror ( "accept failed");
        exit(EXIT_FAILURE);
     }
     
     printf("The connection:%s and %d ", inet_ntoa(server_address.sin_addr ) , htons(sin.port));
     

     /*rc = select ( new_fd , &readfds , &writefds , &exceptfds , &timeout );
     if ( rc == -1 ) {
         perror("Select");
         exit(EXIT_FAILURE);
     } */

     for ( i = 0 ; i < max_clients ;i++ ) {
	//check the position is empty
	if( client_socket[i] == 0 ) {
		client_socket[i] = new_socket;
    }
     }
    }

    for( i = 0; i < max_clients ; i++ ) {

		

     



    
    close (new_fd);
    exit(0);

    close (socket_fd);
    return 0;

}
     
    

