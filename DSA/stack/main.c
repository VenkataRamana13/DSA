#include <stdio.h>
#include "stack.h"

int main(){
    node *p; 
    p = NULL;
    
    push(&p, 3); 
    pop(&p); 
    pop(&p); 
}
