#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define BUF 256
#define INT_SIZE (sizeof(int)*8)
#define CHAR_SIZE (sizeof(char))
extern int bitcopy ( int *snum ,int *dnum, int n, int spos, int dpos );
extern int setbits (int *snum, int *dnum, int pos, int n) ;
extern int invert (int *snum, int pos, int n);
extern int getbits (int *snum, int pos, int n);
extern int input ( );
extern int read_input( );
extern int dec2bin ( unsigned int num );
