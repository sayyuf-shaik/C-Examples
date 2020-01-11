#include <stdio.h>
int main(void)
{
	int *ptr;
	char a = 'a';
	ptr = & a;
	printf("%c",*ptr);
}
