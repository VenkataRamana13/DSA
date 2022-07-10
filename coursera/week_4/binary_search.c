#include <stdio.h>
#include <stdlib.h>

int search(int *, int, int, int); 
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main(){
    int N; scanf("%d", &N); 
    int a[N]; 
    for(int i = 0; i < N; i++){
        scanf("%d", &a[i]); 
    }
    int keys; scanf("%d", &keys); 
    int b[keys]; 
    for(int i = 0; i < keys; i++){
        scanf("%d", &b[i]); 
    }
    int i = 0; 
    for(int i = 0; i < keys; i++){
        printf("%d ", search(a, b[i], 0, N - 1)); 
    }
    printf("\n"); 
}

int search(int *a, int x, int p, int q){
    if(x < a[p] || x > a[q])return -1; 
    int b = (p + q) / 2; 
    if(a[b] == x){
        return b; 
    }
    else if(p != q){ 
        if(x > a[b]) return search(a, x, b + 1, q); 
        else return search(a, x, p, b - 1); 
    }
    else return -1;
}
