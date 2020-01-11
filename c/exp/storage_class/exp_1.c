#include<stdio.h>
int main()
{
	auto int i=4;
	printf("%d",i);// prints zero
	{
		auto int i=5;
		printf("\n%d",i);
    }
    printf("\n%d",i);
}
