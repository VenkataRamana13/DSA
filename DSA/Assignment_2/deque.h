#ifndef __DEQUE_H_
#define __DEQUE_H_

typedef struct node{
    long long value; 
    struct node *next; 
} node; 

node *popFront(node *); 

node *popBack(node *); 

node *pushFront(node *, long long); 

node *pushBack(node *, long long); 

long long front(node *); 

long long back(node *); 

int isEmpty(node *); 

int size(node *); 

#endif
