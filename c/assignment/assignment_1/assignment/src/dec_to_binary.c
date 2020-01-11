#include "header.h"
int dec2bin(unsigned int number)
{
	int i;
	for(i = (INT_SIZE - 1);i >= 0;i--)
	{
		printf("%d", (number&(1<<i))>>i);
	}
return 0;	
}
