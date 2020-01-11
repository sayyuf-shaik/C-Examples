#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <sys/mman.h>
#include <stdlib.h>
#include <semaphore.h>
//#include <linux/asm/page.h>
struct shared_sem {
    char *string;
    //int count;
}ptr_struct;

int main ( void ) 
{
    int fd;
    //sem_t *sem;
    void *addr;
    char *name = "/myshm2";
    char *buf  = ( char * ) malloc ( sizeof (char ) * 256 );
    fd = shm_open ( name , O_RDWR   , 0660 );
    if ( fd == -1 ) {
        perror ( "shm_open");
        exit ( EXIT_FAILURE );
    }
   /* if ( ( sem = sem_open ( "/sem1" , O_CREAT , 0644 , 0 ) ) == SEM_FAILED ) {
        perror ( "sem_init");
        exit ( EXIT_FAILURE );
    }*/
    
    addr = mmap ( NULL , 1 , PROT_READ | PROT_WRITE , MAP_SHARED , fd , 0) ;
    if ( addr == ( void * ) -1 ) {
        perror("mmap");
        exit ( EXIT_FAILURE ) ;
    }
     

    printf("address we got is %p \n", addr);        
    

   if ( ftruncate ( fd , 256 ) == -1 ) {
       perror ( "frtuncate");
      exit ( EXIT_FAILURE );
    }
     
    ptr_struct -> string = "sayyuf";
     
    /*if ( read ( fd , buf , 256 ) < 0 ) {
        perror ( "read error");
        exit ( EXIT_FAILURE );
      }*/
    //ioctl(fd,1,addr);
    // sem_wait(sem);
    printf("Message: %s",  addr);  
    //sem_post(sem);
       
    //memcpy ( addr , buf , 256 );
    /*wait(NULL);*/

    //printf ( "pid = %d", getpid());
    //getchar();
   /* if ( ( fgets ( buf , 256, stdin ) ) == NULL ) {
        perror ( "fgets");
        exit ( EXIT_FAILURE ); 
    }*/
   

   if (  close ( fd ) == -1 ) {
       perror ( "close error" );
       exit ( EXIT_FAILURE );
   }
   if ( shm_unlink ( name ) == -1 ) {
       perror ( "unlink error" );
       exit ( EXIT_FAILURE );
   }
   free(buf);
    //sem_close ( sem );  
    return 0;
}
    

