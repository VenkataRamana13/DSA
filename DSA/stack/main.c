#include <stdio.h>
#include "stack.h"
#include <stdlib.h>

int main(){
    node *p = malloc(sizeof(node)); 
    
    p = push(p, 3); 
    p = push(p, 4); 
    print(p); 
    p = pop(p); 
    print(p); 
}
