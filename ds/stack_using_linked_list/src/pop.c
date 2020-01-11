/** function to pop the elements from the stack **/
#include "header.h"

struct node* pop ( struct node *top )
{
	struct node *temp = top;
    if ( temp == NULL ) {
    printf(" stack is empty");
    exit(EXIT_FAILURE);
    }

    printf("\n%d is popped \n" , top->data );
    top = top->next; /* moving the top to next node */
    
    free(temp);/* freeing the poped node */

    return top;
}

     
