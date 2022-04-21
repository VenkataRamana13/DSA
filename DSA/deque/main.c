#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "deque.h"

#define STR_LENGTH 50

int main(){
    node *p = malloc(sizeof(node));
    char str[STR_LENGTH];

    for (;;){
        scanf ("%s", str);
        if(!strcmp(str, "pop_front")){
            p = popFront(p); 
        }
        else if (!strcmp(str, "pop_back")){
            p = popBack(p);
        }
        else if (!strcmp(str, "front")){
            printf("%d\n", front(p));
        }
        else if (!strcmp(str, "back")){
            printf("%d\n", back(p));
        }
        else if (!strcmp(str, "is_empty")) {
            printf("%d\n", isEmpty(p));
        }
        else if (!strcmp(str, "size")) {
            printf("%d\n", size(p));
        }
        else if (!strcmp(str, "push_front")) {
            int i; 
            scanf("%d", &i); 
            p = pushFront(p, i); 
        }
        else if (!strcmp(str, "push_back")) {
            int i; 
            scanf("%d", &i); 
            p = pushBack(p, i); 
        }
        else if (!strcmp(str, "size")) {
            printf("%d\n", size(p));
        }
        else{
            exit(0);
        }
    }
}
