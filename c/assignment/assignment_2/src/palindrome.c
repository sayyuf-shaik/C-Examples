#include "header.h"
//#include <stdio.h>
//#include <stdlib.h>
int  palindrome ( char *str ) 
{
    int len = 0;
    char temp;
    char *ptr;
    int flag = 1;
    while ( *( str + len ) != '\n' ) {
        len++;
    }
    ptr = str + ( len - 1 );
    while ( str <= ptr ) {
        if ( *str != *ptr )
           flag = 0;
        str++;
        ptr--;
    }

    return flag;
}
/*
int main()
{
	char *s1 = NULL;
	s1 = malloc( sizeof(char)*256);
	fgets(s1,256,stdin);
	printf("%d",palindrome(s1));
}
*/

