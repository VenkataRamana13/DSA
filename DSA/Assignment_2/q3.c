#include <stdio.h>
#include "queue.h"

long long sum(node *); 

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
