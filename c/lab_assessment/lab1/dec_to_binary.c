#include "header.h"
int dec2bin(unsigned int number)
{
	int i;
	for(i = 7;i >= 0;i--)
	{
		printf("%d", ( (number ) & ( 1 << i ) ) >>i );
	}
return 0;	
}
