#include<stdio.h>
//enum {jan=80,feb,mar,apr,jun,jul,aug,sep,oct,nov,dec}this,that;
/*void example()
{
	enum month{jan=5};
	char i=jan;
	printf("%s\n",i);
}
*/
int main()
{
    enum {jan=14,feb,mar}this,that;
	int *p;
	//apr=5;//throws an error
	//int i=feb;
    //for(i=jan;i<=nov;i++)
      //  p=&jan;
        printf("%Lu\n",&this);
		printf("%Lu\n",&that);
		printf("%x\n",jan);
		printf("%x",feb);
    	printf("%x",mar);

	//example();
    return 0;
}
