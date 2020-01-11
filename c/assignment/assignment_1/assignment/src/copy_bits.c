#include "header.h"
unsigned int copy_bits( unsigned int x, unsigned int y, int p, int n)
{
		x = ~( x << ( ( INT_SIZE  ) - (  p +1  ) ) );
        x = x >> ( ( INT_SIZE  ) - ( n  ) );
	y = y ^ x;
   return y;
}
