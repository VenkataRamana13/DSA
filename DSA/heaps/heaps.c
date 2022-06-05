#include "heaps.h"
#include <stdio.h>
#include <stdlib.h>

heap *initialize(int maxElems){
    heap *H = malloc(sizeof(heap)); 
    if(H == NULL){
        printf("out of space\n"); 
        exit(0); 
    }
    H -> elements = malloc((maxElems + 1)*sizeof(ElementType)); 
    if(H -> elements == NULL){
        printf("out of space\n"); 
        exit(0); 
    } 
    H -> Capacity = maxElems; 
    H -> size = 0; 
    H -> elements[0] = -1; 

    return H; 
}

void insert(ElementType x, heap *H){
    int i; 
    if(H -> size == H -> Capacity + 1){
        printf("priority queue is full\n"); 
        return; 
    }
    for(i = ++H -> size; H -> elements[i / 2] > x; i /= 2){
        H -> elements[i] = H -> elements[i / 2]; 
    }
    H -> elements[i] = x; 
}

ElementType deleteMin(heap *H){
    int i, child; 
    ElementType min, last; 
    if(!H -> size){
        printf("priority queue is empty\n"); 
        return H -> elements[0]; 
    }
    min = H -> elements[1]; 
    last = H -> elements[0]; 
    for(i = 1; i * 2 <= H -> size; i = child){
        child = i * 2; 
        if(child != H -> size && H -> elements[child + 1] < H -> elements[child])
            child++; 
        if(last > H -> elements[child])
            H -> elements[i] = H -> elements[child]; 
        else
            break; 
    }
    H -> elements[i] = last; 
    return min; 
}

void print(heap *H){
    for(int i = 1; i <= H -> size; i++){
        printf("%d\n", H -> elements[i]); 
    }
}
