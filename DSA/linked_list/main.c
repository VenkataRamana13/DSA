#include <stdio.h>
#include "list.h"

int main(){
    node *first = NULL; 
//    first = insert(first, 10); 
//    first = insert(first, 20); 
    first = read_numbers(first); 
    display_numbers(first); 
    int n; 
    printf("deletion number: "); 
    scanf("%d", &n); 
    first = delete_value(first, n); 
    display_numbers(first); 
}
