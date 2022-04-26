#include <stdio.h>
#include "queue.h"
#include <stdlib.h>

node *dequeue(node *p){
    if (p == NULL || p -> next == NULL){
        return NULL; 
    }
    node *q = NULL;   
    q = p; 
    p = p -> next; 
    free(q); 
    return p; 
}
 
node *enqueue(node *p, int i){
    if (p == NULL){
        p = malloc(sizeof(node)); 
        p -> value = i; 
        p -> next = NULL; 
        return p; 
    }
    node *r = malloc(sizeof(node)); 
    r -> value = i; 
    node *q = NULL;
    for (q = p; q -> next != NULL; q = q -> next);
    q -> next = r; 
    r -> next = NULL; 
    return p; 
}

int front(node *p){
    if (p == NULL){
        exit(0); 
    }
    return p -> value; 
}

int isEmpty(node *p){
    if(size(p) == 0 || p == NULL){
        return 1; 
    }
    return 0; 
}
 
int size(node *p){
    node *q = NULL;
    int i ; 
    if (p == NULL){
        return 0; 
    }
    for (i = 0, q = p; q -> next != NULL; i++, q = q -> next); 
    return i + 1; 
}
