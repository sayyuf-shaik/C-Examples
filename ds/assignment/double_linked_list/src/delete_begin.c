#include "header.h"
node *delete_begin ( node *start )
{
    if ( start == NULL ) {
        printf ( "\n Empty List!!!" );
        //exit(0);
        return start;
    }
    node *temp = NULL;
    temp = start;
    if ( start -> prev == NULL && start -> next == NULL ) {
        start = NULL;
    }
    else {
        start = start -> next;
        start -> prev = NULL;
    }
    free(temp);
    return start;
}
