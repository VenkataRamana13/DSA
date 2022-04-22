#include <stdio.h>
#include "deque.h"
#include <stdlib.h>

node *deque_q1(node *, int); 
int gcd(int, int); 
int lcm(int, int); 
int min(int, int); 
int all_good(node *); 

int main(){
    node *p = NULL; 
    node *q = NULL; 
    int n, flag = 1; 
    scanf("%d", &n); 
    int a[n]; 
    for(int i = 0; i < n; i++){
        int x; 
        scanf("%d", &x); 
        p = deque_q1(p, x); 
    }
    while(flag){ 
        while(p != NULL){
        q = deque_q1(q, front(p)); 
        p = popFront(p); 
        }
    node *temp = p; 
    p = q;     
    free(temp); 
    flag = !all_good(p);      
    }             
    printf("%d\n", size(p));    //final printing
    while(size(p) > 0){
        printf("%d ", front(p)); 
        p = popFront(p); 
    }
    printf("\n"); 
}

node *deque_q1(node *p, int x){
    if(p == NULL){
        p = pushFront(p, x); 
        return p; 
    } 
    if(gcd(back(p), x) > 1){
        int y = lcm(back(p), x); 
        p = popBack(p); 
        p = pushBack(p, y); 
        return p; 
    } 
    else{
        p = pushBack(p, x);
        return p; 
    }
}

int gcd(int x, int y){
    int t = 1; 
    for(int i = 2; i <= min(x, y); i++){
        if(!(x % i) && !(y % i)){
            t = i; 
        }
    }    
    return t; 
}
 
int lcm(int x, int y){
    return x * y / gcd(x, y); 
}

int min(int x, int y){
    return (x > y) ? x : y; 
}

int all_good(node *p){
    node *q = NULL; 
    for(q = p; q -> next != NULL; q = q -> next){
        if (gcd(q -> value, q -> next -> value) > 1)
            return 0; 
    }
    return 1;     
}

