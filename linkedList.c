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

struct node * free_list (struct node * pointer){

  struct node * holder;
  
  while (holder -> next != NULL){

    holder = pointer;
    pointer = pointer -> next;
    free(holder);
    
  }

  return holder;
  
}
