#include <stdio.h>
#include "queue.h"
#include <stdlib.h>
#include <string.h>

#define STR_LENGTH 50

int main(){
    node *p = NULL; 
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
            front(p); 
        }
        else if (!strcmp(str, "is_empty")) {
            printf("%d\n", isEmpty(p));
        }
        else if (!strcmp(str, "size")) {
            printf("%d\n", size(p));
        }
        else if (!strcmp(str, "q") || !strcmp(str, "quit")){
            exit(0); 
        }
        else{
            printf("Invalid command\n"); 
        }
    }
}
