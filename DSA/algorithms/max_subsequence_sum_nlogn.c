#include <stdio.h>

//solved in O(nlogn) time using divide and conquer
//implemented from data structures and algorithms in C

int recursiveSum(int *, int, int); 

int main(){
    int N; scanf("%d", &N); 
    int a[N]; 
    for(int i = 0; i < N; i++){
        scanf("%d", &a[i]); 
    }
     
}

int recursiveSum(int *a, int left, int right){
    if(left == right){
        if(a[left] > 0){
            return a[left]; 
        }
        else return 0; 
    }
    
}
