#include "header.h"
int main ( void )
{  
    unsigned int number1;
    unsigned int number2;
    char *controller_1;// = ( unsigned char *)&port1;
    //int port2 = 72;
    char *controller_2 ;//= (unsigned char *)&port2;
    printf ( "\n Enter the Output of Controller_1:");
    controller_1 = malloc_input ();
    number1 = convert ( controller_1);
    dec2bin ( number1 );
    printf ( "\n Enter the Input Of Controller_2:");
    controller_2 = malloc_input ();
    number2 = convert ( controller_2);
    dec2bin ( number2 );
	printf ( "\n%d", bits_copy ( controller_1 , controller_2 ) );
    return 0;
}
