#include "header.h"
void display ( node* root  )
{
    if ( root  == NULL ) { 
            return;
    }        
        display ( root ->left );
        printf(" %d ", root -> data );
        display( root -> right );
}
