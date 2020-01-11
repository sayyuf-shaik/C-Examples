#include <stdio.h>
extern int *stat_ptr;
int main(void)
{
	*stat_ptr = 56;
	printf("%d",*stat_ptr);
	examp();
	return 0;
}
