#include "header.h"
int count_node ( node* root , int count )
{
    if ( root  == NULL ) { 
            return count;
    }   
        count++;    
        count_node ( root ->left , count );
        count_node ( root -> right , count );
        
}
