#include<stdio.h>
int main()
{
p#include "header.h"
node *insert_pos ( node *start , int pos )
{
    int i = 1;
    node *traverse = NULL;
    node *new_node = NULL;
    node *temp = NULL;
    traverse = start;
    if ( pos == 1 )  {
        new_node = create_node ( );
        new_node -> next = start;
        new_node -> data = input ( );
        start = new_node;
        return start;
    }
    while ( ( traverse -> next != NULL ) && ( i < ( pos - 1 ) ) ) {
        traverse = traverse -> next;
        i++;
    }
    temp = traverse -> next;
     if ( temp -> next == NULL )  {
        start = insert_after ( start );
        return start;
    }
    new_node = create_node ( );
 rintf("Hello world");
return 0;
}
