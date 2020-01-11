#include "header.h"
node * insert_middle ( node *start )
{
    int i = 1;
    int mid;
    node *traverse = NULL;
    node *new_node = NULL;
    traverse = start;
    while ( traverse -> next != NULL ) {
        traverse = traverse -> next;
        i++;
    }
    ( i % 2 == 0 ) ? ( mid = i/2 ) : ( mid = ( i - 1 ) / 2 );
    printf ( "\n mid -->%d",mid);
    i = 1;
    traverse = start;
    while ( ( i < mid ) ) {
        traverse = traverse -> next;
        i++;
        printf ( " i --->%d",i );
    }
    new_node = create_node ( );
    printf ( "\nEnter the Data: " );
    new_node -> data = input ( );
    new_node -> prev = traverse;
    new_node -> next = traverse -> next;
    traverse -> next -> prev = new_node;
    traverse -> next = new_node;
    return start;
}
