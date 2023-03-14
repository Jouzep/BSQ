/*
** EPITECH PROJECT, 2021
** myatoi
** File description:
** char to int
*/

#include "../include/bsq.h"

int my_atoi(char *str)
{
    int i = 0;
    int size = 0;

    for (i = 0; str[i] != '\0'; i++)
        size = ((str[i] - '0') + size) * 10;
    return (size / 10);
}
