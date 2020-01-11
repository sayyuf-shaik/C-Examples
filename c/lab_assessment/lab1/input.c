#include "header.h"
unsigned  int convert( unsigned char * buffer )
{
	//char num[20];
	int i = 0;
    //int str_size = 0;
	unsigned  int temp;
	unsigned  int number = 0;
	//fgets ( num, sizeof( num ), stdin ); 
    /*if ( num[0] == '+')
    {
       i = str_size++;
    }*/
	for ( i = 0 ; *( buffer + i ) != '\n'; i++ )
	{
	    if ( *( buffer + i) >= '0' && *( buffer + i ) <= '9' )
		{
			temp = *(buffer + i ) - 48;
			number = number * 10 + temp;	
		}		
		else
		{
			return 0;
		}
	}
    return number;
    /*if ( number <= ( pow(2,(( sizeof( unsigned char )*8 )-1) )) ) 
    {
        return number;
    }
    else
    {    
        printf ( "\nInvalid Input\n");
        exit ( 0 );
    }*/
}
