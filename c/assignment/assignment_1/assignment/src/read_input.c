#include <header.h>
int read_input( )
{
	int temp;
	temp = input ();
	if ( temp >=0 && temp <=32)
	{
		return temp;
	}
	else
	{	
		printf("\nBit range is invalid\n");
		exit ( 0 );
	}

}
