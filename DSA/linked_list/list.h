#ifndef __LIST_H_
#define __LIST_H_

typedef struct node{
    int value;
    struct node *next;
} node;

struct node *insert (struct node *list, int n); 

struct node *read_numbers(struct node *list);

void display_numbers(struct node *list); 

struct node *search_node(struct node *list, int n); 

struct node *delete_value(struct node *list, int n); 

#endif
