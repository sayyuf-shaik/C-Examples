#include "header.h"
void display ( node *start )
{
    node *traverse = NULL;
    traverse = start;
    while ( traverse != NULL ) {
        printf ( " %d ",traverse -> data);
        traverse = traverse -> next;
    }
}
