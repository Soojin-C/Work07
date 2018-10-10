#include <stdio.h>
#include <stdlib.h>
#include "linkedList.c"


int main(){

  struct node * pointer = malloc(sizeof(struct node));

  pointer -> i = 1;
  pointer -> next = NULL;
  
  print_list(pointer);
  pointer = insert_front(pointer, 4);

  print_list(pointer);

  pointer = free_list(pointer);

  print_list(pointer);
  
  return 0;
}
