#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

//struct node {int i; struct node * next}

void print_list (struct node * pointer){
  
  while (pointer != NULL){

    printf("%d |", pointer->i);
    pointer = (pointer -> next);
  }

   printf("NULL\n");
       
}

struct node * insert_front (struct node * pointer , int val){

  struct node * temp = malloc(sizeof(struct node));
  temp -> i = val;
  temp -> next = pointer;

  return temp;
  
}

//struct node * free_list (struct node * pointer){

  
  
//}

int main(){

  struct node first;
  struct node second;
  struct node * pointer = &first;

  first.i = 1;
  second.i = 2;
  first.next = NULL;
  second.next = pointer;

  pointer = &second;

  
  print_list(pointer);
  pointer = insert_front(pointer, 4);

  print_list(pointer);
  
}
