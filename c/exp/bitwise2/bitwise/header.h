#include <stdio.h>
#define ts_bits( number, pos)  ( number & (1 << ( pos -1 )) ? (number) : ( number ^ ( 1 << ( pos - 1 ) ) ))

