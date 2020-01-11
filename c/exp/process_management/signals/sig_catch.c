#include <stdio.h>
#include <sys/types.h>
#include <signal.h>
#include <unistd.h>

void catch_ctlc ( int sig_num ) //function which is executed not invoked ; it will handle the signal which caught
{
    printf("Caught Control -C\n");
    fflush( stdout );

    return;
}

//main program
int main ( void )
{
    int i = 0;
    signal ( SIGINT ,catch_ctlc );// function will execute the catch_ctlc

    printf("GO ahead make my day:\n");

    //pause();//wait for a signal , here it is waiting for a keyboard interrupt 
    while(1) {
        printf("Simply wasting the time in %d \n",getpid());
        printf("%d" , i);
        if ( i == 10 )
            i = 0;
        sleep(1);
        i++;
    }

    return 0;
}
