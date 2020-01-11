#include "header.h"


int main(void)
{
	int choice;
    struct node *head = NULL;
    char *buf = NULL;
    buf = ( char *) malloc ( sizeof (char ) * BUF );

	do {
		printf("Enter ur choice\n 1. add_beg\n 2. add_end \n3. reverse \n"
               "4. display\n 0.exit\n");
        if ( fgets ( buf , BUF , stdin ) == NULL ) {
            perror ( "fgets");
            exit ( EXIT_FAILURE );
        }
        choice = atoi ( buf );
		switch (choice) {
			case 1: head = insert_begin ( head );
				break;
			case 2: head = insert_end( head );
				break;
			case 3: head = reverse_list( head );
				break;
			case 4: display( head );
				break;
			case 5:
				exit(0);
		}
	}while ( choice != 0 );
	return 0;
}
