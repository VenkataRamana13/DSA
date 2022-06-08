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
    printf("%d\n", recursiveSum(a, 0, N - 1)); 
}

int recursiveSum(int *a, int left, int right){
    int maxLeftSum, maxRightSum, maxLeftBorderSum = 0, maxRightBorderSum = 0; 
    int LeftBorderSum = 0, RightBorderSum = 0, center, i; 
    if(left == right){
        if(a[left] > 0){
            return a[left]; 
        }
        else return 0; 
    }
    center = (left + right) / 2; 
    maxLeftSum = recursiveSum(a, left, center); 
    maxRightSum = recursiveSum(a, center + 1, right); 
        
}
