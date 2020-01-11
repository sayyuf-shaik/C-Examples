#include <stdio.h>
static int stat_var = 25;
int *stat_ptr = & stat_var;
//printf("%d",*stat_ptr);
int examp()
{
	printf("%d",stat_var);
	return 0;
}
