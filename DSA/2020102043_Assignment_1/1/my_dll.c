#include <stdio.h>
#include "my_dll.h"
#include "node.h"
#include <stdlib.h>

void insert(my_dll **list, int x){
    node *p = malloc(sizeof(node)), *q = malloc(sizeof(node)); 
    p -> value = x; 
    if((*list)->root == NULL){
        p -> next = NULL; 
        p -> prev = NULL;  
        (*list)->root = p; 
        return; 
    } 
    q = (*list) -> root; 
    for (; q -> next != NULL; q = q -> next); 
    q -> prev = q; 
    q -> next = p; 
    p -> prev = q; 
    p -> next = NULL; 
}

void insert_at(my_dll *list, int x, int i){
    node *p = malloc(sizeof(node)), *q = malloc(sizeof(node)); 
    p -> value = x; 
    if (i == 0){
        p -> prev = NULL; 
        p -> next = list -> root; 
        if (list -> root != NULL){
            list -> root -> prev = p; 
        }
        list->root = p; 
        return; 
    }
    int n = 0; 
    for (q = list -> root; q != NULL; q = q -> next){
        n++; 
    }
    if (i == n){
        return insert(&list, x); 
    }
    int y; 
    for (y = 0, q = list->root; y < i; y++, q = q -> next); 
    q = q -> prev; 
    p -> next = q -> next; 
    q -> next = p;
    p -> prev = q; 
}

void delete(my_dll *list, int i){
    node *q = malloc(sizeof(node));
    q = list->root;
    for (int x = 0; x < i; x++){
        printf("%d ", q -> value); 
        q = q -> next; 
    }
    if (list->root == NULL || q == NULL) return;
    if (list->root == q) list->root = q->next; 
    if (q->next != NULL) q->next->prev = q->prev;
    if (q->prev != NULL) q->prev->next = q->next;
    free(q); 
}

int find(my_dll *list, int x){
    node *q; int i = 0; 
    for (q = list->root; q != NULL && q -> value != x; q = q -> next){
        i++;  
    } 
    if (q == NULL) return -1; 
    else return i; 
}
 
void prune(my_dll *list){
    node *q; int i = 0;  
    for (q = list->root; q != NULL; q = q -> next){
        if(i++ % 2 == 1){
            delete(list, i - 1); 
        } 
    }
}

void print(my_dll *list){
    node *q = malloc(sizeof(node)); 
    for (q = list->root; q != NULL; q = q -> next){
        printf("%d ", q -> value); 
    }
    printf("\n"); 
}

void print_reverse(my_dll *list){
    node *q; 
    for (q = list->root; q -> next != NULL; q = q -> next); 
//    printf("%d ", q -> value); 
    for (; q != list->root->next; q = q -> prev){
        printf("%d ", q -> value); 
    }
//    printf("%d %d\n", q -> prev -> value, q -> prev -> prev -> value); 
}

int get_size(my_dll *list){
    int i = 0; node *q; 
    for (q = list->root; q != NULL; q = q -> next){
        i++; 
    }
    return i; 
}
