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

long long sum(node *);

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
    int N; scanf("%d", &N); 
    node *p = NULL; 
    for(int i = 0; i < N; i++){
        int x; scanf("%d", &x); 
        p = enqueue(p, x); 
    }
    printf("%lld\n", sum(p)); 
}

long long sum(node *p){
    long long s = 0; 
    node *q = NULL; 
    for(q = p; q -> next != NULL; q = q -> next){
        node *r = q -> next;
        int i = 0, max = 0; 
        for(; r != NULL; r = r -> next){
            i++;  
            if (r -> value > max && q -> value > max){
                s += (i+1); 
            }    
            if (max < r -> value) max = r -> value; 
        }
    }
    return s;
}
