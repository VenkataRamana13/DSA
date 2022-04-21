#ifndef __DEQUE_H_
#define __DEQUE_H_

typedef struct node{
    int value; 
    struct node *next; 
} node; 

node *popFront(node *); 

node *popBack(node *); 

node *pushFront(node *, int); 

node *pushBack(node *, int); 

void front(node *); 

void back(node *); 

int isEmpty(node *); 

int size(node *); 

#endif
