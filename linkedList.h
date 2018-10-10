struct node {int i; struct node * next;};


void print_list (struct node *pointer);

struct node * insert_front (struct node *pointer, int val);

struct node * free_list (struct node *pointer);
