/** function to insert at the begining **/
#include "header.h"

struct node* insert_begin ( struct node* head )
{
	struct node *new = NULL;
    new = (struct node *)malloc(sizeof(struct node));
    char *buf = NULL;
    buf = ( char * ) malloc ( sizeof (char) * BUF );
	if (new == NULL) {
		printf("No memory\n");
		exit(EXIT_FAILURE);
	} else {
		printf("Enter data\n");
        if ( fgets ( buf , BUF , stdin ) == NULL ) {
            perror("fgets failed");
            exit(EXIT_FAILURE);
        }
        new->data = atoi ( buf );
		new->next = NULL;
	}

	if (head == NULL) {
		head = new; 
	} else {
		new->next = head; /* making the new node to point to the head node */
		head = new; /* poinitng the head to the new node */
	}

    return head;
}

