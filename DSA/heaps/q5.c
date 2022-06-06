#include <stdio.h>
#include <stdlib.h>
#include "heaps.h"

int main(){
    int T; scanf("%d", &T); 
    for(int i = 0; i < T; i++){
        int k; scanf("%d", &k); 
        int a[k][k]; 
        for(int *p = (int *)a; p <= &a[k-1][k-1]; p++){
            scanf("%d", p); 
        }
        
    }
}
