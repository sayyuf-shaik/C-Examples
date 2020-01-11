/** main program to implement the stack using the linked list **/
#include "header.h"

int main(void)
{
	int choice;
    struct node *top = NULL;
    char *buf = NULL;
    buf = ( char *) malloc ( sizeof (char ) * BUF );

	do {
		printf("Enter ur choice\n 1.PUSH \n 2.POP \n3.DISPLAY \n"
               "0.EXIT\n");
        if ( fgets ( buf , BUF , stdin ) == NULL ) {
            perror ( "fgets");
            exit ( EXIT_FAILURE );
        }
        choice = atoi ( buf );
		switch (choice) {
			case 1: top = push ( top );
				break;
			case 2: top = pop ( top );
				break;
			case 3: display( top );
				break;
			case 4:
				exit(EXIT_SUCCESS);
		}
	} while ( choice != 0 );
	return 0;
}
