#include <stdio.h>
#include <stdlib.h>
#include "linkedList.c"


int main(){

  struct node * pointer = malloc(sizeof(struct node));

  pointer = NULL;

  printf("\n The original pointer : ");
  print_list(pointer);

  printf("\n Adding another to the front with the value 4 and 3 : ");
  pointer = insert_front(pointer, 4);
  pointer = insert_front(pointer, 3);

  print_list(pointer);

  printf("\n Freeing the linked list : ");
  pointer = free_list(pointer);

  print_list(pointer);

  printf("\n\n");
  
  return 0;
}
