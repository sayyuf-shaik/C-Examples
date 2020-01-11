#include "header.h"
node *delete_begin ( node *start )
{
    node *temp = NULL;
    temp = start;
    start = start -> next;
    //free(temp);
    return start;
}
