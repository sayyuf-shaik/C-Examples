#include "header.h"
void reverse_display ( node *start )
{
    node *traverse = NULL;
    traverse = start;
    while ( traverse -> next != NULL ) {
        //printf ( " %d ",traverse -> data);
        traverse = traverse -> next;
    }
    
    while ( traverse -> prev != NULL ) {
        printf ( " %d ",traverse -> data);
        traverse = traverse -> prev;
}

        printf ( " %d ",traverse -> data);
    
}
