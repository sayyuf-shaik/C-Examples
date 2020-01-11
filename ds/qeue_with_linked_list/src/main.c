#include "header.h"

int main(void)
{
	int choice;
    struct node *rear = NULL;
    struct node *front = NULL;
    char *buf = NULL;
    buf = ( char *) malloc ( sizeof (char ) * BUF );

	do {
		printf("Enter ur choice\n 1.ENQUE \n 2.DEQUE \n3.DISPLAY \n"
               "0.EXIT\n");
        if ( fgets ( buf , BUF , stdin ) == NULL ) {
            perror ( "fgets");
            exit ( EXIT_FAILURE );
        }
        choice = atoi ( buf );
		switch (choice) {
			case 1: if ( rear == NULL && front == NULL )   //first element of 
                        //queue
                         rear = front = enque ( rear , front );
                     else 
                         rear = enque ( rear , front );
				   break;
			case 2:front = deque ( rear , front );
				   break;
			case 3:display( rear , front );
				   break;
			case 4:
				exit(EXIT_SUCCESS);
		}
	} while ( choice != 0 );
	return 0;
}
