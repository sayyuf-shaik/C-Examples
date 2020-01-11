/**function to display the qeue */
#include "header.h"

void display ( struct node *rear , struct node *front )
{
	struct node *temp = front;
	if ( front == NULL && rear == NULL ) {
		printf("que is empty\n");
		exit(EXIT_FAILURE);
	}
	while ( ( temp != NULL ) && ( temp != rear ) ) {
		printf("%d ", temp->data);
		temp = temp->next; /* prints the elements in the queue */
	}
	printf(" %d\n", temp->data); /* prints the last element of queue */
}
