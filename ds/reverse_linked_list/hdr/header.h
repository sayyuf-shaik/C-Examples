#include <stdio.h>
#include <stdlib.h>
#define BUF 256
extern struct node* insert_begin ( struct node *head );
extern struct node* insert_end ( struct node* head );
extern void display ( struct node *head );
extern struct node *reverse_list ( struct node *head );
struct node {
	int data;
	struct node *next;
};


