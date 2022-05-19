#include <stdio.h>
#include "tree.h"
#include <stdlib.h>
#include <string.h>

int main(){
    node *p = NULL; 
    char str[3]; int x; 
    printf("insert to tree\n"); 
    scanf("%d", &x); 
    insert(&p, x); 
    for(;;){
        printf("another?(yes/no)\n"); 
        scanf("%s", str); 
        if(!strcmp(str, "yes")){
            scanf("%d", &x); 
            insert(&p, x); 
        }
        else break;
    }
    printf("sum is %d\n", sum(p)); 
}
