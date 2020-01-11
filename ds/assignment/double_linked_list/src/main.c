#include "header.h"

int main ( void )
{
    int number;
    char *choice = NULL;
    choice = ( char * ) malloc ( sizeof(char) * BUF );
    node *start = NULL;
    //start = ( node * ) malloc ( sizeof(node) );
    //start -> data = 0;
    start = NULL;
    do {
        printf ( "\n*************************************************" 
                 "\n* 1---> for inserting a node before             *"
                 "\n* 2---> For inserting a node after              *"
                 "\n* 3---> display the list of elements            *"
                 "\n* 4---> Insert the Element in position          *" 
                 "\n* 5---> Insert a elemnt at middle               *"
                 "\n* 6---> Delete a node at the begining           *"
                 "\n* 7---> Delete a node at the end                *"
                 "\n* 8---> Display in reverse order                *"
                 "\n* 0---> to exit                                 *"
                 "\n*************************************************"
                 "\nPlease Enter your Option: ");
        fgets (choice ,BUF ,stdin );
        number = atoi ( choice );
        switch ( number )
        {
            case 1:start = insert_begin ( start );
                   break;
            case 2:start = insert_after ( start );
                   break;
            case 3:display ( start );
                   break;
            case 4:printf ( "\nEnter the position :");
                   number = input ();
                   start = ( node * )insert_pos ( start , number );
                   break;
            case 5:start = insert_middle ( start );
                   break;
            case 6:start = delete_begin ( start );
                   break;
            case 7:start = delete_end ( start );
                   break;
            case 8:reverse_display ( start );
                   break;

        }
    }while ( number != 0 );


    return 0;

}

    
         
    

