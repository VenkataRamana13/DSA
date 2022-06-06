#include <stdio.h>
#include <stdlib.h>

int main(){
    int L, D; scanf("%d%d", &L, &D); 
    int a[D]; 
    for(int i = 0; i < D; i++){
        scanf("%d", &a[i]); 
    }
    qsort(a); int sum = L; 
    for(int i = D - 1; i > 1; i--){
        sum += L - a[i];  
    } 
    printf("%d\n", sum);
}
