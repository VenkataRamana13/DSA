#include <stdio.h>

void bubble_sort(int *, int); 
void swap(int *, int *); 

int main(){
    printf("Number of entries: "); 
    int N; scanf("%d", &N); int a[N];  
    printf("Enter list of numbers: "); 
    for (int i = 0; i < N; i++){
        scanf("%d", &a[i]); 
    }
    printf("k: "); int k;  
    scanf("%d", &k); 
    bubble_sort(a, N); 
    printf("kth highest: %d\n", a[N - k]); 
}

void bubble_sort(int *a, int n){
    int swap_count = 1; 
    while(swap_count != 0){
        swap_count = 0; 
        for (int i = 0; i < n - 1; i++){
            if (a[i] > a[i+1]){
                swap(&a[i], &a[i+1]);
                swap_count++; 
            } 
        }    
    }
}

void swap(int *a, int *b){
    int t = *a;
    *a = *b; 
    *b = t; 
}
