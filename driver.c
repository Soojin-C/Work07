#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"
#include "linkedList.c"


int main(){

  struct node test = NULL;
  struct node* pointer;

  pointer = insert_front(pointer, 1);
  pointer = insert_front(pointer, 2);
  pointer = insert_front(pointer, 3);

  print_list (pointer);

  return 0;
}
