#include <stdio.h>
int main(void)
{
	int i;
	unsigned int number = 9;
	//unsigned int mask   1;
	unsigned int d = 3;
	unsigned int s = 1;
	if( number & (1 << (d - 1) != number & ( 1 << (s - 1)) ))
		number = (number ^ ( 1 <<  (d - 1))) ^ (1 << (s - 1));

	
   // { 
		//number = number ^ ( 1 <<  (d - 1));
		//number  = number ^ (1 << (s - 1));
	//}	
	//printf("%u", number);
	for(i = 31;i >= 0;i--)
    {
        printf("%d", (number&(1<<i))>>i);
    }
	
}
