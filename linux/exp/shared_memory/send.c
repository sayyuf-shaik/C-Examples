#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <sys/mman.h>
#include <stdlib.h>
#include <semaphore.h>
struct name_s{
    char *string;
    int id;
};
int main ( void ) 
{
    int fd;
    struct name_s *ptr;
    void *addr;
    char *name = "/myshm2";
    char *buf = NULL;
    buf  = ( char * ) malloc ( sizeof (char ) * 256 );
    fd = shm_open ( name , O_RDWR | O_CREAT  , 0660 );
    if ( fd == -1 ) {
        perror ( "shm_open");
        exit ( EXIT_FAILURE );
    }
   /* if ( ( sem1 = ( sem_t * )sem_open ( "/sem1" , O_CREAT ,0644,0 ) == SEM_FAILED ) ) {
            perror ( "sem_open");
            exit ( EXIT_FAILURE );
            }*/
    addr = mmap ( NULL , 1 , PROT_READ | PROT_WRITE , MAP_SHARED , fd , 0) ;
    if ( addr == (void * ) -1 ) {
        perror("mmap");
        exit ( EXIT_FAILURE ) ;
    }
   
    printf("%p \n", addr);        
    

    if ( ftruncate ( fd , 256 ) == -1 ) {
       perror ( "frtuncate");
      exit ( EXIT_FAILURE );
    }
     
     
    printf ( "pid %d" , getpid ( ));
    //getchar();
    /*if ( sem_wait ( sem1 ) == -1 ) {
        perror("sem_wait");
    }*/
    printf ( "Enter your meassage:");
   if ( ( fgets ( buf , 256, stdin ) ) == NULL ) {
        perror ( "fgets");
        exit ( EXIT_FAILURE );
   }

    ptr -> string = buf;
    ptr -> id = 5;
     
  
   
   /*
    int i = 0;
    while ( i < 100 ) {
        *( buf + i ) = 'a';
        sleep(1);
        i++;
    }*/
     
      //buf = ( char * ) addr;
      //write ( fd , buf , 256 );
      memcpy ( addr , ptr  , 256 );
      /* wait(NULL);
    read( fd , stdout , 265 );*/
   // printf ( "%s", ptr -> string );
    /*sem_post(sem1);
    sem_close(sem1);*/
    close ( fd );
    return 0;
}
    

