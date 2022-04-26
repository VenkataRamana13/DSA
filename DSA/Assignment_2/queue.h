#ifndef __QUEUE_H_
#define __QUEUE_H_

typedef struct node{
    int value; 
    struct node *next; 
} node; 

node *dequeue(node *); 

node *enqueue(node *, int); 

int front(node *); 

int isEmpty(node *); 

int size(node *); 

#endif
