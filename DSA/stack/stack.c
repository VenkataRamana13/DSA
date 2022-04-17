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
    if (stack == NULL){
        printf ("already empty\n"); exit(0); 
    }
    return stack -> next; 
}

void print(node *stack){
    node *p = NULL; 
    for(p = stack; p -> next != NULL; p = p -> next){
        printf("%d ", p -> value); 
    }
    printf("\n"); 
}
