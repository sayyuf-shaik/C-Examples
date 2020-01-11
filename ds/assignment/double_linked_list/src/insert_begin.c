#include "header.h"
node *insert_begin ( node *start )  
{
    node *new_node = NULL;
    new_node = create_node ( );
    printf ( "Enter the element : ");
    new_node->data = input (  );
    new_node->next = NULL;
    new_node -> prev =  NULL;
    if ( start == NULL )
    {
        start = new_node;
        return start;
    }
        new_node -> next = start;
        start -> prev = new_node;
        start = new_node;
        return start;
}


    
