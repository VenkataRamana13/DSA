#include <stdio.h>
#include "stack.h"
#include <stdlib.h>

node *push(node *stack, int n){
    node *p = malloc(sizeof(node)); 
    
    p -> value = n; 
    p -> next = stack; 
    return p;  
}

node *pop(node *stack){
    if (stack == NULL || stack -> next == NULL){
        return NULL;  
    }
    node *tmp = stack -> next; 
    free(stack); 
    return tmp; 
}

/*void print(node *stack){
    node *p = NULL; 
    for(p = stack; p -> next != NULL; p = p -> next){
        printf("%d ", p -> value); 
    }
    printf("\n"); 
}*/

void top(node *stack){
    if (stack == NULL){
        printf("\n");
        return;  
    }
    printf("%d\n", stack -> value); 
}

int size(node *stack){
    node *p = NULL;
    int i ; 
    if (stack == NULL){
        return 0; 
    }
    for (i = 0, p = stack; p -> next != NULL; i++, p = p -> next); 
    return i + 1; 
}

int isEmpty(node *stack){
    if (stack == NULL){
        return 1;
    }
    return 0; 
}

