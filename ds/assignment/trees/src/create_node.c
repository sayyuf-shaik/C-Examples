#include "header.h"
node* create_node ( )
{
    node *newnode = NULL;
    newnode = ( node * ) malloc ( sizeof ( node ) );
    newnode -> left = NULL;
    newnode -> right = NULL;
    return newnode;
}

