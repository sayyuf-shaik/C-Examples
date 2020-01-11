#include "header.h"
int bits_copy ( unsigned char * controller_1, unsigned char *controller_2 )
{
		
    unsigned int mask;
    unsigned int number1 = convert ( controller_1 );
    unsigned int number2 = convert ( controller_2 ); 
    unsigned int number = convert ( controller_2 ); 
	mask  = ( ( number1 & ( (~0) << 4 ) ) >> 4);
	number2 = ( number2 >> 4 ) << 4;
	number2 = number2 ^ mask;
    if ( number2 == number )
    {
        return 0;
    }
    else
    {   
     return number2;
    } 
}
