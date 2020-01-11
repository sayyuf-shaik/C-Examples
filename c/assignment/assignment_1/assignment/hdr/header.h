#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define INT_SIZE (sizeof(int)*8)
#define CHAR_SIZE (sizeof(char))
#define BUF 256
#define ts_bits( number, pos)  ( number & (1 << ( pos -1 )) ? (number) : ( number ^ ( 1 << ( pos - 1 ) ) ))
#define getbits( x, p, n ) ( x = ( ( x << (  ( INT_SIZE - 1) - p ) ) >> (  ( INT_SIZE - 1)  - n ) ) )
#define MAX(number1, number2) (~ ( number1 ^ number2 ) ^ ( ~number2))
#define MIN(number1, number2) (~ ( number1 ^ number2 ) ^ ( ~number1))
#define CLEAR_RIGHT( num ) ( num & (num - 1))
#define SET_RIGHT( num ) (num | (num + 1))
#define SET_LEFT( num ) ( num | ( num  + ( 1 <<  ( INT_SIZE - 1) ) ) )
#define CLEAR_LEFT( num ) ( num & (num - ( 1 <<  ( INT_SIZE - 1) ) ) )
#define SETBITS( s , d ) ( ( ~ ( (~0) << ( ( d - s ) + 1 ) ) ) << s )
#define CLEARBITS( s , d ) ( ~ ( ( ~ ( (~0) << ( ( d - s ) + 1 ) ) ) << s ))
#define TOGGLE( num, s ,d ) ( num ^ ( ( ~ ( (~0) << ( ( d - s ) + 1 ) ) ) << s  ) )   
extern int bit_swap (unsigned int number, int s, int d);
extern unsigned int bit_copy (unsigned number, unsigned int number2,int n,int s, int d);
extern unsigned int even_bit_toggle( unsigned int number );
extern int dec2bin (unsigned int number);
extern unsigned int odd_bit_toggle( unsigned int number );
extern unsigned int left_rotate_bits (unsigned int num);
extern unsigned int right_rotate_bits (unsigned int num);
extern unsigned int left_rotate_n_bits ( unsigned int number, int n );
extern unsigned int right_rotate_n_bits ( unsigned int number, int n );
extern int count_bit_set( unsigned int number );
extern int count_bit_clear( unsigned int number );
extern int cnt_leading_set_bits( unsigned int number  );
extern int cnt_leading_clear_bits( unsigned int number  );
extern int cnt_trailing_clear_bits( unsigned int number  );
extern int cnt_trailing_set_bits( unsigned int number  );
extern unsigned int copy_bits( unsigned int x, unsigned int y, int p, int n);
extern unsigned int invert (unsigned int x, int p, int n);
extern unsigned int input ();
extern int bits_swap(unsigned int number1,unsigned int number2,unsigned int d,unsigned int s);
extern int read_input ();
