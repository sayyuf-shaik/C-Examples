#include "header.h"
int input ( )
{
	char *str = NULL;
	str = ( char * ) malloc ( sizeof ( char ) * MAX ) ;
	fgets ( str, MAX , stdin );
	return atoi(str);
}
