#include <stdio.h>
#include "queue.h"

int sum(node *); 

int main(){
    int N; scanf("%d", &N); 
    node *p = NULL; 
    for(int i = 0; i < N; i++){
        int x; scanf("%d", &x); 
        p = enqueue(p, x); 
    }
    printf("%d\n", sum(p)); 
}

int sum(node *p){
    int s = 0; 
    node *q = NULL; 
    for(q = p; q -> next != NULL; q = q -> next){
        node *r = q -> next;
        int i = 0, max = 0; 
        for(; r != NULL; r = r -> next){
            i++;  
            if ((r -> value) > q -> value && (r -> value) > max){
                max = r -> value; 
                s += i; 
                printf("%d\n", i); 
            }    
        }
    }
    return s;
}
