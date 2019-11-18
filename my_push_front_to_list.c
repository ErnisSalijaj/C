/*
** ETNA PROJECT, 30/10/2019 by salija_e
** my_push_front_to_list
** File description:
**      [...]
*/

#include"my_list.h"
#include<stdlib.h>
#include<unistd.h>

linked_list_t   *my_push_front_to_list(char value, linked_list_t *list)
{
    linked_list_t *node;

    node = malloc(sizeof(*node));
    if (node == NULL)
        return (0);
    node->next = list;
    node->data = value;
    return (node);
}

void my_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char ** argv)
{
    linked_list_t *list;
    linked_list_t *tmp;

    list = NULL;
    list = my_push_front_to_list('c', list);
    list = my_push_front_to_list('b', list);
    list = my_push_front_to_list('a', list);
    tmp = list;
    while (tmp != 0)
        {
            my_putchar(tmp->data);
            tmp = tmp->next;
        }
    return (0);
}
