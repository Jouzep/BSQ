/*
** EPITECH PROJECT, 2021
** tools for bsq
** File description:
** tools for bsq
*/

#include "../include/bsq.h"

int sizebsq(int size, int result)
{
    if (size < result)
        return result;
    else
        return size;
}

int placebsq(int size, int result, int i, int place)
{
    if (size < result)
        return i;
    else if (place == 0)
        return i;
    else
        return place;
}

char *size_one(char *str, int a)
{
    while (str[a] != '\0') {
        if (str[a] == '.') {
            str[a] = 'x';
            break;
        }
        a++;
    }
    return str;
}

char *other_size(int size, char *str, int place, int rows)
{
    for (int i = 0; i < size; i++) {
        str[place] = 'x';
        for (int a = 1; a < size; a++)
            str[place - a] = 'x';
        place = place - (rows + 1);
    }
    return str;
}
