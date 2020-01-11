#include<stdio.h>
//extern int dec_to_bin(int );
int a[32];

int dec2bin(int number)
{
    int i;
    int p=0;

    for(i = 0;i < 32;i++)
    {
        a[i] = (number&(1<<i))>>i;
    //  if(number & (1 << i))
    //      a[i] = 1;
        /*if(temp==0)
            a[i]=0;
        else
            a[i]=1;*/
        //p++;
    }

    for(i = 31;i >= 0;i--)
        printf("%d",a[i]);

}

int main(void)
{
	int a;
	scanf("%d",&a);
    dec2bin(a<<4);
	
	return 0;
}
