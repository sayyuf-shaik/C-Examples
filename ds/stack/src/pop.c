#include "header.h"
int pop ( int array_stack[] )
{
	int temp;
	if ( top == -1 ) {
		printf ( "\nStack is empty " );
		return 0;
	}
	else {
		temp = array_stack[top];
		--top;
		return temp;
}
}
