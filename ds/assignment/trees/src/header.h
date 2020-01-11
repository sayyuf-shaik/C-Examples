#include <stdio.h>
#include <stdlib.h>
#define BUF 256
typedef struct tree{
    int data;
    struct tree *left;
    struct tree *right;
}node;

extern node* insert_tree ( node *root , int element );
extern node* create_node ( );
extern int input ( );
extern void display ( node *root );
extern node* delete_tree ( node *root , int value );
extern int count_node ( node *root , int count );
