#include "header.h"
unsigned int input()
{
	char *num = NULL;
    num = ( char * ) malloc ( sizeof(char) * BUF );
	int i = 0;
    int str_size = 0;
	unsigned int temp;
	unsigned int number = 0;
	fgets ( num, BUF , stdin ); 
    if ( *( num + 0 ) == '+')
    {
       i = str_size++;
    }
	for ( i = str_size ; * ( num + i ) != '\n'; i++ )
	{
	    if ( *( num+ i ) >= '0' && *( num + i )  <= '9' )
		{
			temp = *( num + i ) - 48;
			number = number * 10 + temp;	
		}		
		else
		{
			printf ( "input is invalid" );
			exit ( 0 );
		}
	}
    if ( number <= ( pow(2,(( sizeof( unsigned int )*8 )-1) )) ) 
    {
        return number;
    }
    else
    {    
        printf ( "\nInvalid Input\n");
        exit ( 0 );
    }
}
