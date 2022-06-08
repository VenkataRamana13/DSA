#include <stdio.h>

//solved in O(n^2) time

int main(){
    int N; scanf("%d", &N); 
    int a[N]; 
    for(int i = 0; i < N; i++){
        scanf("%d", &a[i]); 
    }
    int sum = 0, max = 0; 
    for(int i = 0; i < N; i++){
        for(int j = i; j < N; j++){
            sum += a[j]; 
            if(sum > max) max = sum;
        }
        sum = 0; 
    }     
    printf("%d\n", max); 
}
