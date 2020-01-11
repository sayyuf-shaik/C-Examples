#include<stdio.h>
static int c=32000;
int main()
{
	static int a=32000;
	int b=32000;
	printf("%ld",a*b*c);
}
