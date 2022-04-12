#include <stdio.h>
#include "list.h"
#include <stdlib.h>

struct node *insert (struct node *list, int n){ 
    node *new_node; 
    new_node = malloc(sizeof(node)); 
    if(new_node == NULL){
        printf ("malloc failed in allocation\n"); 
        exit(EXIT_FAILURE); 
    }
     
    new_node -> value = n; 
    new_node -> next = list; 
    return new_node; 
}

struct node *read_numbers(struct node *list){
    int n; 
    
    printf("Enter a series of integers(0 to terminate): ");
    for (;;){
        scanf("%d", &n); 
        if (n == 0) return list; 
        list = insert(list, n); 
    }
}

void display_numbers(struct node *list){
    node *p; 
    p = malloc(sizeof(node)); 
    if(p == NULL){
        printf ("malloc failed in allocation\n"); 
        exit(EXIT_FAILURE); 
    }
    for (p = list; p != NULL; p = p -> next){
        printf("%d\n", p -> value); 
    }
}

struct node *search_node(struct node *list, int n){
    node *p; 
    for (p = list; p != NULL; p = p -> next){
        if (p -> value == n){
            return p; 
        }
    }
    return NULL; 
} 

struct node *delete_value(struct node *list, int n){
    node *cur, *prev; 
    for (cur = list, prev = NULL; cur != NULL && cur -> value != n;  
            prev = cur, cur = cur -> next);  
    if (cur == NULL) return list; 
    if (prev == NULL) list = list -> next; 
    else prev -> next = cur -> next; 
    free(cur); 
    return list; 
} 
