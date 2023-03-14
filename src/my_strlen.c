/*
** EPITECH PROJECT, 2021
** strleng
** File description:
** str
*/

#include "../include/bsq.h"

int my_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return i;
}
