/*
** ETNA PROJECT, 28/10/2019 by salija_e
** my_fibonacci
** File description:
**      [...]
*/

int my_fibonacci_rec(int nb)
{
    if ( nb < 0)
        return 0;
    if ( nb < 2)
        return nb;
    else
        nb = my_fibonacci_rec(nb - 1) + my_fibonacci_rec(nb - 2);
    return nb ;
}
