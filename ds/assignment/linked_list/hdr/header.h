#include <stdio.h>
#include <stdlib.h>
#define BUF 256

typedef struct Node{
    int data;
    struct Node *next;
}node;

extern node *create_node ( );
extern node *insert_begin ( node *start );                                          
extern node *insert_after ( node *start );
extern void display ( node *start );
extern node *insert_pos ( node *start, int n );
extern int input ( );
extern node *insert_middle ( node *start );  
extern node *delete_begin ( node *start );
extern node *delete_end ( node *start );
