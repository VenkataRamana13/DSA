#include <stdio.h>
#include "heaps.h"
#include <stdlib.h>

int main(){
    heap *H = initialize(5); 
    for(int i = 1; i < 6; i++){
        insert(i, H); 
    }
    print(H); 
    deleteMin(H); 
    insert(6, H); 
    print(H); 
}
