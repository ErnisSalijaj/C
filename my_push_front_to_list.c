/*
** ETNA PROJECT, 30/10/2019 by salija_e
** my_push_front_to_list
** File description:
**      [...]
*/

#include"../include/my_list.h"
 
linked_list_t   *my_push_front_to_list(int value, linked_list_t *list)
{
    linked_list_t *node;

    node = malloc(sizeof(*node));
    if (node == NULL)
        return (0);
    node->next = list;
    node->data = value;
    return (node);
}

