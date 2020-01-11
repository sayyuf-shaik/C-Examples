#include <stdio.h>
#include <sys/types.h>
int main ( void )
{
	fork();
        printf("%d\n", getpid());
	fork();
	printf("HI\n");
	return 0;
}
