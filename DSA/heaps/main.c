#include <stdio.h>
#include "heaps.h"
#include <stdlib.h>
#include <string.h>

int main(){
/*    heap *H = initialize(5); 
    for(int i = 1; i < 6; i++){
        insert(i, H); 
    }
    print(H); 
    insert(6, H); 
    print(H); */
    heap *h = initialize(100); 
    int x; char str[3]; 
    printf("insert\n"); 
    scanf("%d", &x); 
    insert(x, h);     
    for(;;){
        printf("another?\n"); 
        scanf("%s", str); 
        if(!strcmp(str, "yes")){
            printf("insert\n"); 
            scanf("%d", &x); 
            insert(x, h); 
        }
        else{
            break; 
        }
    }
    print(h);     
    printf("delete min: \n"); 
    deleteMin(h); 
    print(h); 
}
