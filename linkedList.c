#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

//struct node {int i; struct node * next}

void print_list (struct node * pointer){
  
  while (pointer != NULL){

    printf("%d |", pointer->i);
    pointer++;

    printf("NULL")
  }
       
}

struct node * insert_front (struct node * pointer , int val){

  struct node temp;
  temp.i = val;
  temp.next = pointer;

  pointer = &temp;

  return pointer;
  
}

//struct node * free_list (struct node * pointer){

  
  
//}

int main(){

  struct node first = NULL;

  struct node * pointer = &first;
  print_list(pointer);
  
}
