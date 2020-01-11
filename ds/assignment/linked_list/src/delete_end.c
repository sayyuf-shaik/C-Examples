#include "header.h"
node *delete_end ( node *start ) 
{
    node *traverse = NULL;
    //node *temp = NULL;
    traverse = start;
    while ( traverse -> next->next != NULL ) {
        traverse = traverse -> next;
    }
    printf ( "\n%d", traverse -> data );
    //temp = traverse;
    traverse -> next = NULL;
    //free ( temp );
    return start;
}
