//calculated gcd in O(logn) time
#include <stdio.h>

int gcd(int, int); 

int main(){
    int M, N; scanf("%d%d", &M, &N); 
    printf("%d\n", gcd(M, N)); 
}
 
int gcd(int M, int N){
    int min = M < N ? M : N; 
    int max = M + N - min; 
    int rem; 
    while(min > 0){
        rem = max % min; 
        max = min; 
        min = rem; 
    }
    return max; 
}
