#include "header.h"
node *delete_end ( node *start ) 
{
    node *traverse = NULL;
    //node *temp = NULL;
    traverse = start;
    while ( traverse -> next != NULL ) {
        traverse = traverse -> next;
    }
    if ( traverse -> prev == NULL && traverse -> next == NULL ) 
        start = NULL;
    else 
        traverse -> prev -> next = NULL;
    free ( traverse );
    return start;
}
