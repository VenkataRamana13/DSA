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
    int x; scanf("%d", &x); 
    qsort(a, N, sizeof(int), cmpfunc);     
    printf("%d\n", search(a, x, 0, N - 1) + 1); 
}

int search(int *a, int x, int p, int q){
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
