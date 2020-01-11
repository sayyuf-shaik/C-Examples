#include "header.h"
void display ( struct node *top )
{
	struct node *temp = top;
	if (top == NULL) {
		printf("stack is empty\n");
		return ;
	}

	while (temp != NULL) {
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}
