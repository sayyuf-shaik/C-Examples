#include <stdio.h>
int result[16];
int main(void)
{
	unsigned short int number = 4;
	unsigned short int by_times = 2;
	int j;
	int i;	
	for(i = 0;i < 16; i++)
	{
	 	j = (number & (1 << by_times) << i);	
		if((number | (j >>  by_times)))
		{
			result[i]=i;
		}
	}

	for(i = 16;i >= 0;i--)
	{
		printf("%d",result[i]);
	}
	return 0;
}
