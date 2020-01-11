#include <stdio.h>

int generate_mask( unsigned int number, int max, int min)
{
	int i;
//	unsigned int mask = 4294967295;
	//unsigned int result;
	//result = number & (( mask  >> ( 32 - (max - min + 1))) << (min - 1));
	/*mask = mask  >> ( 32 - (max - min + 1));
	mask = mask << (min - 1);
	result = number & mask;*/
	for(i = 32;i >= 0;i--)
    {
        printf("%d", ( ( ( number & (( 4294967295  >> ( 32 - (max - min + 1))) << (min - 1))  ) & (1 << i ) ) >> i));
    }
	return 0;
}

int main(void)
{
	unsigned int number;
	int max;
	int min;
	printf("Enter the number :");
	scanf("%u", &number);
	printf("Enter the maximum of range :");
	scanf("%d", &max);
	printf("\nEnter the minimum of range :");
    scanf("%d", &min);
	generate_mask( number, max, min);
	return 0;
	
}
