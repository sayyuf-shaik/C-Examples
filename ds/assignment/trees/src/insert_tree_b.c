#include "header.h"
node *insert_tree ( node *root )
{
    node *temp = NULL;
    int element;
    temp = root;
    while ( temp != NULL ) {
        printf ("\nEnter the Data : " );
        element = input ( );
        if ( element < temp -> data ) {
            if (temp -> left == NULL) {
                node *newnode = NULL;
                newnode = create_node ( );
                temp -> left = newnode;
                temp -> data = element;
                return root;
            }
            else
                temp = temp -> left;
               
        }
        else {
                if ( temp -> right == NULL ) {
                    node *newnode = NULL;
                    newnode = create_node ( );
                    temp -> right = newnode;
                    temp -> data = element;
                    return root;
                }
                else
                    temp = temp -> right;
                    
        
        }
    }
    
}




