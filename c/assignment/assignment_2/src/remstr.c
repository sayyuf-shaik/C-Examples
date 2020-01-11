#include "header.h"
char *remsstr(char *str,const char *sstr)
{
	int count=0;
    int count1=0;
    int c=0;
	while( *str++ != *sstr && *str!= '\n')
    count1++;
    for ( str-- ; *str++ == *sstr++ ; count++);
    str-=count+1;
    while( count-- ){
    while( *str!= '\n' ){
    *(str) = *(str+1);
    str++;
    c++;
    }
    str-=c;
    c=0;
    }
    str-=count1;
    return str;
}
