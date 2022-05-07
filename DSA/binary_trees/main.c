#include <stdio.h>
#include "tree.h"
#include <stdlib.h>

int main(){
    node *p = NULL; 
    insert(&p, 3); 
    insert(&p, 1); 
    insert(&p, 7); 
    insert(&p, 4); 
    traverse(p); 
}
