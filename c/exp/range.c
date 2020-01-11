#include<stdio.h>
#include<math.h>
int main()
{
	printf("%lf\n",(pow(2,(sizeof(long double)*8)-1)));
	return 0;
}
