#include <stdio.h>
#include "stack.h"
#include <stdlib.h>

void push(struct node **stack, int n){
    node *p; 
    p = malloc(sizeof(node)); 
    
    p -> value = n; 
    p -> next = *stack; 
    *stack = p;  
}

void pop(struct node **stack){
    if (*stack == NULL){
        printf ("already empty\n"); return; 
    }
    *stack = (*stack) -> next; 
}
