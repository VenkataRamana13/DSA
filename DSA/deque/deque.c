#include "deque.h"
#include <stdlib.h>
#include <stdio.h>

node *popFront(node *p){
    if (p == NULL || p -> next == NULL){
        return NULL; 
    }
    node *q = NULL;  
    q = p;
    p = p -> next; 
    free(q);  
    return p;
}

node *popBack(node *p){
    if(p == NULL || p -> next == NULL){
        return NULL; 
    } 
    node *q = NULL;  
    for (q = p; q -> next -> next != NULL; q = q -> next); 
    q -> next = NULL; 
    return p;  
}
 
node *pushFront(node *p, int i){
    if (p == NULL){
        p = malloc(sizeof(node)); 
        p -> value = i; 
        p -> next = NULL; 
        return p; 
    }
    node *q = malloc(sizeof(node)); 
    q -> value = i;
    q -> next = p; 
    p = q; 
    return p; 
}

node *pushBack(node *p, int i){
    if (p == NULL){
        p = malloc(sizeof(node)); 
        p -> value = i; 
        p -> next = NULL; 
        return p; 
    }
    node *r = malloc(sizeof(node)), *q = NULL; 
    r -> value = i; 
    for (q = p; q -> next != NULL; q = q -> next); 
    q -> next = r;
    r -> next = NULL; 
    return p;
}
 
void front(node *p){
    if (p == NULL){
        printf("\n"); 
        return; 
    }
    printf("%d\n", p -> value); 
}

void back(node *p){
    if (p == NULL){
        printf("\n"); 
        return; 
    }
    node *q = NULL; 
    for (q = p; q -> next != NULL; q = q -> next); 
    printf("%d\n", q -> value); 
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
    return i + 1; 
}
