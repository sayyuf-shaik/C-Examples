#include "header.h"
int main ( void )
{
    int choice;
    int count = 0;
    node *root = NULL;
    int element; 
    /*root = create_node ( );
    root -> left = NULL;                                                        
    root -> right = NULL; */
    do {
        printf ( "\n**************************************"
                 "\n* 1---> Insert data into tree        *"
                 "\n* 2---> Display                      *"
                 "\n* 3---> Delete a node                *"
                 "\n* 4---> Number of nodes              *"
                 "\n* 0---> Exit                         *"
                 "\n**************************************"
                 "\nEnter your choice: ");
        choice = input ( );
    switch ( choice ) 
    {
        case 1:printf ( "\nEnter the data into the tree: " );
               element = input ( );
               root = insert_tree ( root , element );
               break;
        case 2:display ( root );
               break;
        case 3:printf ( "\nEnter the element to be deleted: " );
               element = input ( );
               root = delete_tree ( root , element );
               break;
        case 4:printf ( "\nNo of nodes: %d", count_node ( root , count ) );
               break;
    }
    }while ( choice != 0 );
    return 0;
}
