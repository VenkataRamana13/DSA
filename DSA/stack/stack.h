#ifndef __STACK_H_
#define __STACK_H_

typedef struct node{
    int value; 
    struct node *next; 
} node; 

node *push(node *stack, int n); 

node *pop(node *stack); 

void print(node *stack); 

#endif
