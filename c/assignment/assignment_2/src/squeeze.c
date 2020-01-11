#include "header.h"
void squeeze ( char *str )
{
	int i = 0;
	char *ptr = NULL;
	char *cp = NULL;
	cp = ( char * ) malloc ( sizeof(char) * BUF );
	ptr = str + 1;
	while ( *str != '\n' ) {
		if ( *str != *ptr ) {
				*( cp + i ) = *str;
				i++;
		}
		str++;
		ptr++;
	}
	printf ( "The squezzed String is %s", cp);
}
			
