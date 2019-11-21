#include<stdlib.h>
#include<stdio.h>
#include"my_readline.c"
#define _MY_H_
#define _MY_H2_
#define _MY_H3_
#include"my_strcmp.c"

int count_word(const char *str)
{
    int i = 0;
    int nb_words = 0;
    while (str[i] != '\0')
        {
            while (str[i] == ';' && str[i] != '\0')
                i++;
            if (str[i] != '\0')
                nb_words++;
            while (str[i] != ';' && str[i] != '\0')
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
        else if (str[i] == ';') {
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

char ***my_readfile(char *file)
{
    char *line;
    int len = 0;
    char ***array = malloc(sizeof(char **) * (len + 1));
    array[0] = NULL;
    FILE *stream = fopen(file, "r");
    if (stream == NULL){
        perror("fopen");
        exit(EXIT_FAILURE);
    }
    while ((line = my_readline(stream))){
        array = realloc(array, sizeof(char **) * (len + 2));
        array[len] = my_str_to_word_array(line);
        ++len;
        array[len] = NULL;
        printf("%s\n", line);    
    }
    
    fclose(stream);
    return array;
}

void fonc(char ***base_csv)
{
    int i_line=0;
    info_commercial_t *infos_commercial = NULL;
    commercial_t *commercials= NULL;
    while (i_line != NULL){
        
    }
}



int main(int ac, char **av)
{
    char ***csv[2];
    for (int i=1; i < ac; i++)
        csv[i - 1] = my_readfile(av[i]);
    printf("Lecture done");
    return 0;
}
