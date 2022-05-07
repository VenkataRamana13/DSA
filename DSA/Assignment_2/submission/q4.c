#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int value; 
    struct node *next; 
} node; 

node *push(node *stack, int n); 

node *pop(node *stack); 

int top(node *stack); 

int size(node *stack); 

int isEmpty(node *stack); 

int max_hist(int *, int); 

void change_matrix(int *, int, int); 

node *push(node *stack, int n){
    if (stack == NULL){
        stack = malloc(sizeof(node)); 
        stack -> value = n; 
        stack -> next = NULL; 
        return stack; 
    }

    node *p = malloc(sizeof(node)); 
    
    p -> value = n; 
    p -> next = stack; 
    return p;  
}

node *pop(node *stack){
    if (stack == NULL){
        return NULL;  
    }
    if(stack -> next == NULL){
        return NULL; 
    }
    node *tmp = stack -> next; 
    free(stack); 
    return tmp; 
}

/*void print(node *stack){
    node *p = NULL; 
    for(p = stack; p -> next != NULL; p = p -> next){
        printf("%d ", p -> value); 
    }
    printf("\n"); 
}*/

int top(node *stack){
    if (stack == NULL){
        return 0;  
    }
    return stack -> value; 
}

int size(node *stack){
    node *p = NULL;
    int i ; 
    if (stack == NULL){
        return 0; 
    }
    for (i = 0, p = stack; p -> next != NULL; i++, p = p -> next); 
    return i + 1; 
}

int isEmpty(node *stack){
    if (stack == NULL){
        return 1;
    }
    return 0; 
}


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
