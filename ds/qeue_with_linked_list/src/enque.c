#include "header.h"


struct node* enque ( struct node *rear , struct node * front )
{
	struct node *new = NULL;
    new = (struct node *)malloc(sizeof(struct node));
    char *buf = NULL;
    buf = (char *) malloc ( sizeof ( char ) * BUF );
	if( new == NULL || buf == NULL ) {
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

	if ( ( front == NULL ) && ( rear == NULL ) ) {
		front = new; /* adding the first element to queue */
        rear = new;  /* making front and rear both are pointing to same  
        new node */
        return front;

	} else {
       
       rear -> next = new;/* pointing the rear to new node */
       rear = new; /* moving the rear to new node */
	}

    return rear;
}
