#include <stdio.h>
#include <stdlib.h>
#define BUF 256
extern struct node* enque ( struct node *rear , struct node *front  );
extern struct node* deque ( struct node *rear , struct node *front  );
extern void display ( struct node *rear , struct node *front );
struct node {
	int data;
	struct node *next;
};


