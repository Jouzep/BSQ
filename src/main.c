/*
** EPITECH PROJECT, 2021
** main
** File description:
** main
*/

#include "../include/bsq.h"

int main(int ac, char **av)
{
    int ret;

    if (ac == 2)
        ret = bsq(av[1]);
    else
        return 84;
    if (ret == -1) {
        my_putstr("No such file");
        return 84;
    } else
        return 0;
}
