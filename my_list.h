#ifndef _LIST_H_
#define _LIST_H_

typedef struct linked_list
{
    char data;
    struct linked_list *next;
} linked_list_t;

#endif
