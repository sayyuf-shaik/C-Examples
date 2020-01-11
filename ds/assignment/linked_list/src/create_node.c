#include "header.h"
node *create_node ( )
{
    node *new_node = NULL;
    new_node = ( node *) malloc ( sizeof(node) );
    return new_node;
}
