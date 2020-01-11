/** function to insert the node at the end of the linked list **/
#include "header.h"

struct node* insert_end ( struct node *head )
{
	struct node *new = NULL;
	struct node *temp = head;
    new = (struct node *)malloc(sizeof(struct node));
    char *buf = NULL;
    buf = (char *) malloc ( sizeof ( char ) * BUF );
	if(new == NULL) {
		printf("No memory\n");
		exit(EXIT_FAILURE);
	} else {
		printf("Enter data\n");
        if ( fgets ( buf , BUF , stdin ) == NULL ) {
            perror("fgets failed");
            exit ( EXIT_FAILURE );
        }
        new->data = atoi ( buf );
		new->next = NULL;
        printf("data %d",new->data);
	}

	if (head == NULL) {
		head = new; /* if node is the first element then point head to new element */
	} else {
		while (temp->next != NULL)
			temp = temp->next; /* traversing untill it encounters null */  
		    temp->next = new; /* adding the node */
	}

    return head;
}
