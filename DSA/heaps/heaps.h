#ifndef __HEAP_H_
#define __HEAP_H_ 

#define ElementType int 

typedef struct heap{
    int Capacity; 
    int size; 
    ElementType *elements; 
}heap; 

heap *initialize(int); 
void insert(ElementType, heap *); 
ElementType deleteMin(heap *); 
void print(heap *); 

#endif 
