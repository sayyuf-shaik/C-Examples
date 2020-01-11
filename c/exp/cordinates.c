#include<stdio.h>
struct point{
	int x,y;
	float price;
	char ch;
}p;
int main()
{
	printf("Enter X and Y values");
    scanf("%d %d %f",&p.x,&p.y,&p.price);
	printf("The Values you are entered are %d , %f and %d",p.x,p.y);

	return 0;
}	
