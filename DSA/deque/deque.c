#include "deque.h"
#include <stdlib.h>
#include <stdio.h>

node *popFront(node *p){
    if (p == NULL){
        return 0; 
    }
    node *q = malloc(sizeof(node)); 
    q = p;
    p = p -> next; 
    free(q);  
    return p;
}

node *popBack(node *p){
    if(p == NULL){
        return 0; 
    } 
    node *q = NULL;  
    for (q = p; q -> next -> next != NULL; q = q -> next); 
    q -> next = NULL; 
    return p;  
}
 
node *pushFront(node *p, int i){
    node *q = malloc(sizeof(node)); 
    q -> value = i;
    q -> next = p; 
    p = q; 
    return p; 
}

node *pushBack(node *p, int i){
    node *r = malloc(sizeof(node)), *q = NULL; 
    r -> value = i; 
    for (q = p; q -> next != NULL; q = q -> next); 
    q -> next = r;
    r -> next = NULL; 
    return p;
}
 
int front(node *p){
    if (p == NULL){
        printf("empty\n"); 
        return 0; 
    }
    return p -> value; 
}

int back(node *p){
    if (p == NULL){
        printf("EMPTY\n"); 
        return 0;
    }
    node *q = NULL; 
    for (q = p; q -> next != NULL; q = q -> next); 
    return q -> value;  
}

int isEmpty(node *p){
    if(p == NULL){
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
    return i; 
}
