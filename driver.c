#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"
#include "linkedList.c"


int main(){

  struct node first;
  struct node * pointer = &first;

  first.i = 1;
  first.next = NULL;
  
  print_list(pointer);
  pointer = insert_front(pointer, 4);

  print_list(pointer);

  pointer = free_list(pointer);

  print_list(pointer);
  
  return 0;
}
