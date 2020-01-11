#include<stdio.h>
enum month{jan,feb,mar,apr,jun,jul,aug=100,sep,oct,nov,dec};
int main()
{
	int i=dec;
	//for(i=jan;i<=nov;i++)
		printf("%d\n",i);
	return 0;
}
