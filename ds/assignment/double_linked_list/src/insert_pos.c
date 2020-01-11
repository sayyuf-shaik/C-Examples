#include "header.h"
node *insert_pos ( node *start , int pos )
{
    int i = 1;
    node *traverse = NULL;
    node *new_node = NULL;
    node *temp = NULL;
    traverse = start;
    if ( start == NULL && pos != 1 ) {
        printf ( "\nList is Empty!!!" );
        return start;
     }
     else if ( start == NULL && pos == 1 ) {
         start = insert_begin ( start );
         return start;
     }
       
    if ( pos == 1 )  {
        new_node = create_node ( );
        start -> prev = new_node;
        new_node -> next = start;
        printf ( "\nEnter the Data: " );
        new_node -> data = input ( );
        start = new_node;
        return start;
    }
    while ( ( traverse -> next != NULL ) && ( i < ( pos - 1 ) ) ) {
        traverse = traverse -> next;
        i++;
    }
    temp = traverse -> next;
     if ( temp -> next == NULL )  {
        start = insert_after ( start );
        return start;
    }
    new_node = create_node ( );
    printf ( "\nEnter the Data: " );
    new_node -> data = input ( );
    new_node -> prev = temp -> prev;
    new_node -> next = temp;
    temp -> prev -> next = new_node;
    temp -> prev = new_node;
    return start;
}
