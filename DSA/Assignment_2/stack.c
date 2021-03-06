#include <stdio.h>
#include "stack.h"
#include <stdlib.h>

node *push(node *stack, int n){
    if (stack == NULL){
        stack = malloc(sizeof(node)); 
        stack -> value = n; 
        stack -> next = NULL; 
        return stack; 
    }

    node *p = malloc(sizeof(node)); 
    
    p -> value = n; 
    p -> next = stack; 
    return p;  
}

node *pop(node *stack){
    if (stack == NULL){
        return NULL;  
    }
    if(stack -> next == NULL){
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

int top(node *stack){
    if (stack == NULL){
        return 0;  
    }
    return stack -> value; 
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

