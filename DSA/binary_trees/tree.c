#include "tree.h"
#include <stdio.h>
#include <stdlib.h>

node *search_tree(node *p, int x){
    if (p == NULL){
        return NULL; 
    }
    if (p -> value == x){
        return p; 
    }
    if(x < p -> value) return search_tree(p -> left, x); 
    else return search_tree(p -> right, x); 
}

node *min(node *p){
    if (p == NULL) return NULL; 
    node *q = p; 
    while(q -> left != NULL) q = q -> left; 
    return q; 
}

node *max(node *p){
    if (p == NULL) return NULL; 
    node *q = p; 
    while(q -> right != NULL) q = q -> right; 
    return q; 
}

void traverse(node *p){
    if (p != NULL){
        printf("%d\n", p -> value); 
        traverse(p -> left); 
        traverse(p -> right); 
    }
}

void insert(node **p, int x){
    node *l; 
    if(*p == NULL){
        l = malloc(sizeof(node)); 
        l -> value = x; 
        l -> left = l -> right = NULL; 
        *p = l; 
        return; 
    }
    
    if(x < (*p) -> value) insert(&((*p)->left), x); 
    else insert(&((*p)->right), x); 
}
