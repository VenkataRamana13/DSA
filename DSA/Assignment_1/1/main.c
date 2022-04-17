#include <stdio.h>
#include "my_dll.h"
#include "node.h"
#include <string.h>
#include <stdlib.h>

#define STR_LENGTH 20

int main(){
    char str[STR_LENGTH]; 
    my_dll *list = malloc(sizeof(my_dll)); 
    list->root = NULL; 
/*    node *p = malloc(sizeof(node)), *q = malloc(sizeof(node)), *r = malloc(sizeof(node)); 
    list.root = p; 
    p -> value = 10; 
    p -> prev = NULL;
    p -> next = q; 
    q -> prev = p; 
    q -> value = 20; 
    q -> next = r; 
    r -> prev = q; 
    r -> value = 30; 
    r -> next = NULL; */
    for (;;){
        scanf ("%s", str);
        if(!strcmp(str, "insert")){
            int i; 
            scanf("%d", &i); 
            insert(&list, i); 
        } 
        else if (!strcmp(str, "insert_at")){
            int x, i; 
            scanf("%d%d", &x, &i); 
            insert_at(list, x, i); 
        }
        else if (!strcmp(str, "delete")){
            int i; 
            scanf("%d", &i); 
            delete(list, i); 
        }
        else if (!strcmp(str, "find")){
            int x; 
            scanf ("%d", &x); 
            printf("%d\n", find(list, x)); 
        }
        else if (!strcmp(str, "prune")) {
            prune(list);
        }
        else if (!strcmp(str, "print")) {
            print(list);         
        }
        else if (!strcmp(str, "print_reverse")) {
            print_reverse(list); 
        }
        else if (!strcmp(str, "get_size")) {
            printf("%d\n", get_size(list)); 
        }
        else{
            exit(0); 
        }
    }
}
