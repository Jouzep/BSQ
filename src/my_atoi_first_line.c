/*
** EPITECH PROJECT, 2021
** myatoi
** File description:
** char to int
*/

#include "../include/bsq.h"

int my_atoi_first_line(char *str)
{
    int i;
    int size = 0;

    for (i = 0; str[i] != '\n'; i++)
        size = ((str[i] - '0') + size) * 10;
    return (size / 10);
}
