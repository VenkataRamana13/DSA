#ifndef _LIST_H_
#define _LIST_H_

//3 basic operations of linked lists : searching, inserting, deletion

typedef struct list{ 
    int value; 
    struct list *next;
} list; 

list *search_list(list *l, int); 

void insert_list(list **l, int); 

list *item_ahead(list *l, list *l); 

void delete_list(list **l, list **l); 

#endif
