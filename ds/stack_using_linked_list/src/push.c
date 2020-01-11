/** program to push the elements into the stack **/
#include "header.h"

struct node* push ( struct node *top )
{
	struct node *new = NULL;
    new = (struct node *)malloc(sizeof(struct node));
    char *buf = NULL;
    buf = (char *) malloc ( sizeof ( char ) * BUF );
	if(new == NULL || buf == NULL ) {
		perror("malloc failed\n");
		exit(EXIT_FAILURE);
	} else {
		printf("Enter data\n");
        if ( fgets ( buf , BUF , stdin ) == NULL ) {
            perror("fgets failed");
            exit ( EXIT_FAILURE );
        }
        new->data = atoi ( buf );
		new->next = NULL;
	}

	if (top == NULL) {
		top = new; /* make new node to top */
	} else {
       new -> next = top; /* pointing the new node to top element */
       top = new; /* making top to point new added node */
	}

    return top;
}
