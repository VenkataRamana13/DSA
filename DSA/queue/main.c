#include <stdio.h>
#include "queue.h"
#include <stdlib.h>
#include <string.h>

#define STR_LENGTH 50

int main(){
    node *p = malloc(sizeof(node));
    char str[STR_LENGTH];

    for (;;){
        scanf ("%s", str);
        if(!strcmp(str, "dequeue")){
            p = dequeue(p);
        }
        else if (!strcmp(str, "enqueue")){
            int i; 
            scanf("%d", &i); 
            p = enqueue(p, i); 
        }
        else if (!strcmp(str, "front")){
            printf("%d\n", front(p));
        }
        else if (!strcmp(str, "is_empty")) {
            printf("%d\n", isEmpty(p));
        }
        else if (!strcmp(str, "size")) {
            printf("%d\n", size(p));
        }
        else{
            exit(0);
        }
    }
}
