#include <stdio.h>
#include <stdio_ext.h>
//#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stddef.h>
#define BUF 256
extern int strcmp( char *s1, char *s2 );
extern char *chr_add_instr ( char *buf, char c);
extern char *sappend ( char *str1, char *str2 );
extern char *malloc_input ();
extern unsigned int input();
extern char *snappend ( char *str1, char *str2, size_t n);
extern int strcasecmp( const char *s1, const char *s2 );
extern size_t str_spn(const char *buf1,const char *buf2);
extern char *rev_str ( char *s1 );
extern int  palindrome ( char *str );
extern void squeeze ( char *str );    
extern char * insertchar (char *str, const char ch, int pos);
extern char *strtok( char *str , const char *delim ) ;
extern char *remsstr(char *str,const char *sstr);
extern int strrot(const char *str, const char *ptr);
