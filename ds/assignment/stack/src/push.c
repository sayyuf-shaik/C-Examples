#include "header.h"
void push ( int array_stack[], int size ,int number )
{

		
	if ( top >= size ) {
		printf ( "\nStack Overflow " );
		
		}
	else {
		top++;
		array_stack[top] = number;
		}
}
		
