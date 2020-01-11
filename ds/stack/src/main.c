#include "header.h"
int top = -1;
int main ( void )
{
	int array_stack [ MAX ];/*Array to store stack*/
	int choice;
	int number;
	int size;
	printf ( "\nEnter the size of Array" );
	size = input ( );
	do {
	printf ( "\n Enter your choice " 
			 "\n 1-->for push a element:"
			  "\n2-->for pop a element "
				"\n3-->for display the contents of stack");
	choice = input ( );
	switch ( choice )
	{
		case 1:printf ( "\nEnter your Element" );
			   number = input ( );
			   push ( array_stack , size ,number);
			   break;
		case 2:printf ( "\nThe element popped is %d", pop ( array_stack ) );
			   break;
		case 3:printf ( "\nThe Elements of The stack are ---->\n" );
			   display ( array_stack );
			   break;
		default:printf("\nINVALID OPTION");
				break;
	}
	} while ( choice != 0 );
	return 0;
}

