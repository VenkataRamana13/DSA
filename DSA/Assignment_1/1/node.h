#ifndef __NODE_H_
#define __NODE_H_

typedef struct node {
    int value; 
    struct node *prev; 
    struct node *next; 
} node; 

#endif
