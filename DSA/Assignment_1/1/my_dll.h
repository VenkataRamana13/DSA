#ifndef _MY_DLL__
#define _MY_DLL__

#include "node.h"

typedef struct my_dll{
    node *root; 
} my_dll; 

void insert(my_dll **list, int x); 

void insert_at(my_dll *list, int x, int i); 

int find(my_dll *list, int x); 

void prune(my_dll *list); 

void print(my_dll *list); 

void print_reverse(my_dll *list); 

int get_size(my_dll *list); 

void delete(my_dll *list, int i); 

#endif
