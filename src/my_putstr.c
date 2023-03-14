/*
** EPITECH PROJECT, 2021
** my_putstr.c
** File description:
** print a string
*/

#include "../include/bsq.h"

void my_putstr(char *str)
{
    int size = my_strlen(str);

    write(1, str, size);
}
