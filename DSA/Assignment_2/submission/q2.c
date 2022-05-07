#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int value; 
    struct node *next; 
} node; 

node *dequeue(node *); 

node *enqueue(node *, int); 

int front(node *); 

int isEmpty(node *); 

int size(node *); 

int min(node *, int, int); 

node *dequeue(node *p){
    if (p == NULL || p -> next == NULL){
        return NULL; 
    }
    node *q = NULL;   
    q = p; 
    p = p -> next; 
    free(q); 
    return p; 
}
 
node *enqueue(node *p, int i){
    if (p == NULL){
        p = malloc(sizeof(node)); 
        p -> value = i; 
        p -> next = NULL; 
        return p; 
    }
    node *r = malloc(sizeof(node)); 
    r -> value = i; 
    node *q = NULL;
    for (q = p; q -> next != NULL; q = q -> next);
    q -> next = r; 
    r -> next = NULL; 
    return p; 
}

int front(node *p){
    if (p == NULL){
        exit(0); 
    }
    return p -> value; 
}

int isEmpty(node *p){
    if(size(p) == 0 || p == NULL){
        return 1; 
    }
    return 0; 
}
 
int size(node *p){
    node *q = NULL;
    int i ; 
    if (p == NULL){
        return 0; 
    }
    for (i = 0, q = p; q -> next != NULL; i++, q = q -> next); 
    return i + 1; 
}

int main(){
    node *p = NULL; 
    int N, M; scanf("%d%d", &N, &M);
    for(int i = 0; i < N; i++){
        int x;
        scanf("%d", &x); 
        p = enqueue(p, x); 
    }
    for(int i = 0; i < N - M + 1; i++){
        printf("%d ", min(p, i, M)); 
    }
    printf("\n"); 
}

int min(node *p, int i, int M){
    node *q = p; 
    for(int j = 0; j < i; j++){
        q = q -> next;  
    }
    int m = q -> value; 
    for(int k = 0; k < M; k++){
        if(q -> value < m) m = q -> value; 
        q = q -> next;
    } 
    return m; 
}
