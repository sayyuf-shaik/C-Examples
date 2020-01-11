#include<stdio.h>
int main()
{
	char p = 10;
	char *ptr = &p;
	
	printf("size of float %d\n",sizeof(*ptr));
//	printf("size of character %d\n",sizeof(char));
//	printf("size of float %d\n",sizeof(float));
//	printf("size of double %d\n",sizeof(double));
//	printf("size of short int %d\n",sizeof(short int));
//	printf("size of long int %d\n",sizeof(long int));
//	printf("size of long long int %d\n",sizeof(long long int));
//	printf("size of unsigned int %d\n",sizeof(unsigned int));
//	printf("size of long double %d\n",sizeof(long double));
	return 0;
}
