#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    long long value; 
    struct node *next; 
} node; 

node *popFront(node *); 

node *popBack(node *); 

node *pushFront(node *, long long); 

node *pushBack(node *, long long); 

long long front(node *); 

long long back(node *); 

int isEmpty(node *); 

int size(node *); 

node *popFront(node *p){
    if (p == NULL || p -> next == NULL){
        return NULL; 
    }
    node *q = NULL;  
    q = p;
    p = p -> next; 
    free(q);  
    return p;
}

node *popBack(node *p){
    if(p == NULL || p -> next == NULL){
        return NULL; 
    } 
    node *q = NULL;  
    for (q = p; q -> next -> next != NULL; q = q -> next); 
    q -> next = NULL; 
    return p;  
}
 
node *pushFront(node *p, long long i){
    if (p == NULL){
        p = malloc(sizeof(node)); 
        p -> value = i; 
        p -> next = NULL; 
        return p; 
    }
    node *q = malloc(sizeof(node)); 
    q -> value = i;
    q -> next = p; 
    p = q; 
    return p; 
}

node *pushBack(node *p, long long i){
    if (p == NULL){
        p = malloc(sizeof(node)); 
        p -> value = i; 
        p -> next = NULL; 
        return p; 
    }
    node *r = malloc(sizeof(node)), *q = NULL; 
    r -> value = i; 
    for (q = p; q -> next != NULL; q = q -> next); 
    q -> next = r;
    r -> next = NULL; 
    return p;
}
 
long long front(node *p){
    if (p == NULL){
        exit(0); 
    }
    return p -> value; 
}

long long back(node *p){
    if (p == NULL){
        exit(0); 
    }
    node *q = NULL; 
    for (q = p; q -> next != NULL; q = q -> next); 
    return q -> value; 
}

int isEmpty(node *p){
    if(p == NULL){
        return 1;
    }
    return 0; 
}
 
int size(node *p){
    node *q = NULL;
    int i ; 
    if (p == NULL){
        return 0; 
    }
    for (i = 0, q = p; q -> next != NULL; i++, q = q -> next); 
    return i + 1; 
}
//should configure for long long 

node *deque_q1(node *, long long); 
int gcd(int, int); 
long long lcm(int, int); 
int min(int, int); 
int all_good(node *); 

int main(){
    node *p = NULL; 
    node *q = NULL; 
    int n, flag = 1; 
    scanf("%d", &n); 
    for(int i = 0; i < n; i++){
        long long x; 
        scanf("%lld", &x); 
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
        printf("%lld ", front(p)); 
        p = popFront(p); 
    }
    printf("\n"); 
}

node *deque_q1(node *p, long long x){
    if(p == NULL){
        p = pushFront(p, x); 
        return p; 
    } 
    if(gcd(back(p), x) > 1){
        long long y = lcm(back(p), x); 
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
 
long long lcm(int x, int y){
    return (long long)x * y / gcd(x, y); 
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

