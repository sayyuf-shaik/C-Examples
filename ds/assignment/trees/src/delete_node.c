#include "header.h"
node *delete_tree ( node *root, int value )
{
    node *del_node = NULL;
    node *l = NULL;
    node *r = NULL;
    node *s = NULL;
    node *q = NULL;
    del_node = root;
    while ( del_node != NULL ) {
        q = del_node;
        if ( value < del_node -> data )
            del_node = del_node -> left;
        else if ( value > del_node -> data )
            del_node = del_node -> right;
        
        if ( del_node != NULL && value == del_node -> data ) {
            l = del_node -> left;
            r = del_node -> right;
            s = r;
            while ( ( s != NULL ) && ( s -> left != NULL ) ) 
                s = s -> left;
            if ( q -> right == del_node ) { /*if the element is right child of the parent*/
                if ( r != NULL )
                    q -> left = l;
                else 
                    q -> right = r;
                
            
                if ( s != NULL ) 
                    s -> left = l;
                free ( del_node );
                return root;
            }
            else if ( q -> left == del_node ) { /*left side of the parent*/
                q -> left = l;
                while ( ( l != NULL ) && ( l -> right != NULL ) )  
                    l = l -> right;
                    if ( l != NULL )
                        l -> right = r;
                    free ( del_node );
                    return root;
                
            }
            else { /*if the element is root*/
                if ( r != NULL ) { /*if the right subtree is  present */
                    root = r;
                    s -> left = l;
                }
                else { 
                    root = l;
                }
                free ( del_node );
                return root;
            }

        }
    }
    return root;
}
