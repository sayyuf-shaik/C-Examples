#include "header.h"
int strrot(const char *str, const char *ptr)
{ 
    int count=0;
	int count1=0;
    int count2=0;
    while( *ptr++ != '\n' )
	    count++;
    ptr=(ptr-count-1);
	while( *str++ !=  *ptr )
    	count1++;  
    for( str-- ; *str++ == *ptr++ && *str != '\n' ;count2++ );
    count2++;
    str-= (count2+count1);  
    while( *str  == *ptr && *ptr!= '\n' ){
    	str++;
    	ptr++;
    	count2++;
    }
    if( count2 == count )
		return 1;
    else
    	return 0;

}


