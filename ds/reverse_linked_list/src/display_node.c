#include "header.h"
void display ( struct node *head )
{
	if (head == NULL) {
		printf("List is empty\n");
		return ;
	}

	struct node *temp = head;
	while (temp != NULL) {
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}
