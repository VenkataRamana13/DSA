#include <stdio.h>

#include "stack.h"

int max_hist(int *, int); 

void change_matrix(int *, int, int); 

int main(){
    int N, M, max = 0; scanf("%d%d", &N, &M); 
    int a[N][M]; 
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            char ch; 
            scanf(" %c", &ch); 
            if(ch == '.') a[i][j] = 1; 
            else a[i][j] = 0; 
        }
    }
    change_matrix(&a[0][0], N, M); 
    for(int i = 0; i < N; i++){
        int j = max_hist(&a[0][0] + i*M, M); 
        if(max < j) max = j;
    } 
    printf("%d\n", max);  
}

void change_matrix(int *a, int N, int M){
    for(int i = 1; i < N; i++){
        for(int j = 0; j < M; j++){
            int num = *(a + M*i +j); 
            if(num == 0) continue; 
            else *(a + M*i + j) += *(a + M*(i-1) + j); 
        } 
    }
}

int max_hist(int *a, int M){
    node *p = NULL; int max = 0, area = 0, temp = 0;  
    int i = 0; 
    while(i < M){
        if(p == NULL || a[i] >= a[top(p)]){
            p = push(p, i++); 
        }
        else{
            temp = top(p);  
            p = pop(p); 
            if(p == NULL)
                area = a[temp] * i; 
            else area = a[temp] * (i - top(p) - 1); 
            if(max < area) max = area; 
        } 
    }
    while(p != NULL){
        temp = top(p); 
        p = pop(p); 
        if(p == NULL)
            area = a[temp] * i; 
        else area = a[temp] * (i - top(p) - 1); 
        if(max < area) max = area; 
    }
    return max; 
}
