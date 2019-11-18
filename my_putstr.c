/*
** ETNA PROJECT, 09/11/2019 by salija_e
** my_putstr
** File description:
**      [...]
*/
#include <unistd.h>
void my_putchar(char c);
void my_putstr(const char *str)
{
    char i=0;
    while( str[i]!='\0')
        {
            my_putchar(str[i]);
            i++;
        }
}
