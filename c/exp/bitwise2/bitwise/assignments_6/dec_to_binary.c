#include <stdio.h>
//int a[32];

int dec2bin(unsigned int number)
{
	int i;
	for(i = 31;i >= 0;i--)
	{
		printf("%d", (number&(1<<i))>>i);
	}
	
	//for(i = 32;i >= 0;i--)
	//	printf("%d",a[i]);
	
}

/*int main(void)
{
	int number;
	scanf("%d", &number);
	dec2bin(number);
	return 0;
}*/
