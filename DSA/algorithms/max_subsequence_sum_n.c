#include <stdio.h>

//solved in O(n) time

int main(){
    int N; scanf("%d", &N); 
    int a[N]; 
    for(int i = 0; i < N; i++){
        scanf("%d", &a[i]); 
    }
    int sum = 0, max = 0; 
    for(int i = 0; i < N; i++){
        sum += a[i]; 
        if(sum > max) max = sum; 
        else if (sum < 0) sum = 0; 
    }
    printf("%d\n", max); 
}
