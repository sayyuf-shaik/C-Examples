#include "header.h"
char *snappend ( char *str1, char *str2, size_t n)
{   
    int i = 0;
    int j = 0;
    while ( (*( str1 + i ) != '\0') ) {
        i++;
    }
    i--;
    if( n > i ){
	    printf("Please give valid position!!\n");
    }
    else {
    	while ( *( str2 + j ) != '\0' ) {
        	*( str1 + n ) = *( str2 + j );
        	n++;
       	 	j++;
    	}
    }
    return str1;

}

