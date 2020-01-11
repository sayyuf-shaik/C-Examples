/* program to dequeue the elements in the queue */
#include "header.h"
struct node* deque ( struct node *rear , struct node* front  )
{
    struct node* temp = NULL;
    if ( rear == NULL || front == NULL ) { /* to check whether the queue is
    empty */ 
    printf(" que is empty");
    exit(EXIT_FAILURE);
    }

    printf("\n%d is dequed \n" , front->data );
    if ( front == rear ) {
        front = rear = NULL; 
    }
    else {
        temp = front; /* pointing the temp to front */
        front = front->next; /* moving the front to next element */
    }
    
    free(temp); /* freeing the dequed node */

    return front;
}

     
