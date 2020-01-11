#include "header.h"
node *insert_begin ( node *start )  
{
    char *ptr = NULL;
    ptr = ( char * ) malloc ( sizeof( char ) * BUF );
    node *new_node = NULL;
    new_node = create_node ( );
    printf ( "ENter the element");
    fgets ( ptr, BUF , stdin );
    new_node->data = atoi ( ptr );
    new_node->next = NULL;
    if ( start == NULL )
    {
        start = new_node;
        return start;
    }
        new_node -> next = start;
        start = new_node;
        return start;
}


    
