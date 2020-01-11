#include "header.h"
node *insert_tree( node *root , int element )
{
    node *temp = NULL;
    node *p = NULL;
    node *r = NULL;
    temp = ( node *) malloc ( sizeof(node) );
    if ( temp == NULL ) {
        printf ( "\nMalloc Failed" );
        exit (0);
    }
    temp -> data = element;
    temp -> left = NULL;
    temp -> right = NULL;
    if ( root == NULL ) {
        printf("hello\n");
        root = temp;
    }
    else {
        p = root;
        while ( p != NULL ) {
           r = p;
          if ( p -> data > element ) {
              p = p -> left;
          }
          else if ( p -> data < element ) {
             p = p -> right;
          }
          else {
             printf("Element Already Exists");
             return root;
          }
        }
        if ( r -> data > element )
           r -> left = temp;
        else
           r -> right = temp;
    }

       return root;
    } 
