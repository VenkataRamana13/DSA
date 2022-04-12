#ifndef __STACK_H_
#define __STACK_H_

typedef struct node{
    int value; 
    struct node *next; 
} node; 

void push(struct node **stack, int n); 

void pop(struct node **stack); 

#endif
