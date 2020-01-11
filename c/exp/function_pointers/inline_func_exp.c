/** Program to illustrate the usage and implentation of inline functions ******/

#include <stdio.h>

inline int min ( int a , int b ) /* storage class has to be specified before
 the inline or else it will through error */
{
	return ( a < b ? a : b );
}

int main ( void ) 
{
	int a = 5;
	int b = 6;
    
	printf("MIN = %d",min ( a , b )); 

	/**inline function is a function which is expanded upon invocation i.e. at the
    function call the code is substiued*/
	   

    return 0;
}
