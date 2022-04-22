#include <stdio.h>
#include "queue.h"

int min(node *, int, int); 

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
