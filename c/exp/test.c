#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	printf("size of integer %d\n",sizeof(i));
	printf("range of integer %f",pow(2,2*sizeof(i)));
	return 0;
}
