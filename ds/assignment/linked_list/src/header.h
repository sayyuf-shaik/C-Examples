#include <stdio.h>
#include <stdlib.h>
#define BUF 256

typedef struct Node{
    int data;
    struct Node *next;
}node;

node *create_node ( );
node *insert_begin ( node *start );                                              
node *insert_after ( node *start );                                              
    
