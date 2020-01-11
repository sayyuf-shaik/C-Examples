/** function to reverse the given linked list */
#include "header.h"

struct node *reverse_list ( struct node *head )
{
	if (head == NULL)
		return head;

	struct node *nextnode = NULL;
	struct node *prev = NULL;
	struct node *current = head;

	while (current != NULL) {
		nextnode = current->next; /* making next node to point the next of the 
                                     currentnode */
		current->next = prev; /* current of next is poiniting to previous node */
		prev = current; 
		current= nextnode; 
	}
	head = prev;
    return head;
}
