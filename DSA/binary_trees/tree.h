#ifndef __TREE_H_
#define __TREE_H_

typedef struct node{
    int value; 
    struct node *left; 
    struct node *right; 
}node; 

node *search_tree(node *p, int x); 

node *min(node *p); 

node *max(node *p); 

void traverse(node *p); 

void insert(node **p, int x); 

int sum(node *p); 

int sum_search(node *, int); 

#endif
