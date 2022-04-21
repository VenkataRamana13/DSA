#include <stdio.h>
#include "stack.h"
#include <stdlib.h>
#include <string.h>

#define STR_LENGTH 50

int main(){
    node *p = NULL;  
    char str[STR_LENGTH]; 
    
/*    p = push(p, 3); 
    p = push(p, 4); 
    print(p); 
    p = pop(p); 
    print(p); */
    
    for (;;){
        scanf ("%s", str);
        if(!strcmp(str, "push")){
            int i; 
            scanf("%d", &i); 
            p = push(p, i); 
        } 
        else if (!strcmp(str, "pop")){
            p = pop(p); 
        }
        else if (!strcmp(str, "top")){
            top(p); 
        }
/*       else if (!strcmp(str, "print")) {
            print(p);         
        }*/
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
            printf("invalid command\n"); 
        }
    }
}        

