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
