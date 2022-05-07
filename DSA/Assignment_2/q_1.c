#include <stdio.h>
#include "stack.h"
#include <stdlib.h>

int is_good(node *); 

int gcd(int, int); 

int lcm(int, int); 

int main(){
    node *p = NULL;
    int N; scanf("%d", &N); 
    for(int i = 0; i < N; i++){
        int x; scanf("%d", &x); 
        p = push(p, x);  
    }
    int count = 1; 
    while(!is_good(p)){
    node *q = NULL; 
    while(p != NULL){
        if(gcd(top(p), p -> next -> value) == 1){
            int y = top(p); 
            p = pop(p); 
            q = push(p, y); 
        }
        else if(gcd(top(p) , p -> next -> value) != 1){
            int x = top(p), y = p -> next -> value, z = lcm(x, y); 
            p = pop(p); p = pop(p); q = push(q, z); 
        }
    }
    p = q; 
    free(q); 
    }
    printf("%d\n", size(p)); 
    while(p != NULL){
        printf("%d ", top(p)); 
        p = pop(p); 
    }
    printf("\n"); 
}

int is_good(node *p){
    if(p == NULL) return 0; 
    node *r = NULL; 
    for(r = p; r -> next != NULL; r = r -> next){
        if(gcd(r -> value, r -> next -> value) > 1) return 0; 
    }
    return 1; 
}

int gcd(int x, int y){
    int min = (x <= y ? x : y), gcd;  
    for(int i = 1; i <= min; i++){
        if(!(x%i) && !(y%i)) gcd = i; 
    }
    return gcd; 
}

int lcm(int x, int y){
    return (x*y/gcd(x,y)); 
}
