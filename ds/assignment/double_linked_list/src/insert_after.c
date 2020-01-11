#include "header.h"

node *insert_after ( node *start)
{
    char *ptr = malloc(sizeof(char)*BUF);
    printf ( "Enter the value you want enter");
    fgets ( ptr, BUF, stdin);
    node *traverse = NULL;
    traverse  = start;
    node *new_node = NULL;
    new_node = create_node ();
    new_node -> data = atoi ( ptr );
    new_node -> prev = NULL;
    new_node -> next = NULL;
    if ( start == NULL ) {
        start = new_node;
        return start;
    }
    while ( traverse -> next != NULL ) {
        traverse = traverse -> next;
    }
    new_node -> prev = traverse;
    traverse -> next = new_node;
    
    return start;
}
