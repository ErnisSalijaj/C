#ifndef _LIST_H_
#define _LIST_H_

typedef struct linked_list
{
    int data;
    struct linked_list *next;
} linked_list_t;

#endif
