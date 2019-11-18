/*
** ETNA PROJECT, 06/11/2019 by salija_e
** my_str_to_word_array
** File description:
**      [...]
*/

#include<stdlib.h>
#include<stdio.h>

int count_word(const char *str)
{
    int i = 0;
    int nb_words = 0;
    while (str[i] != '\0')
        {
            while (str[i] == ' ' && str[i] != '\0')
                i++;
            if (str[i] != '\0')
                nb_words++;
            while (str[i] != ' ' && str[i] != '\0')
                i++;
        }
    return (nb_words);
}
char **my_str_to_word_array(const char *str)
{
    char **dest;
    dest = malloc(sizeof(char*) * count_word(str) + 1);
    int i = 0;
    int x = 0;
    int y = 0;
    while (str[i] != '\0') {
        if (i == 0) {
            dest[x] = malloc((count_word(str) + 1) * sizeof(char));
            dest[x][y] = str[i];
            y++;
        }
        else if (str[i] == ' ') {
            dest[x][y] = '\0';
            y = 0;
            x++;
            dest[x] = malloc((count_word(str) + 1) * sizeof(char));
        } else {
            dest[x][y] = str[i];
            y++;
        }
        i++;
    }
    dest[x][y] = '\0';
    dest[x+1] = NULL;
    return (dest);
}
int main(int ac, char **av)
{
char **dest = my_str_to_word_array(av[1]);

for (int i = 0; dest[i] != NULL; i++)
    printf("dest[%d] = %s\n", i, dest[i]);
return 0;
}
