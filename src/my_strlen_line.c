/*
** EPITECH PROJECT, 2021
** lengt of the line
** File description:
** lengt of the line choosen
*/

#include "../include/bsq.h"

int my_strlen_line(char *str, int line)
{
    int i = 0;
    int count = 0;
    int lengt = 0;

    while (str[i] != '\0') {
        if (count == line)
            break;
        if (str[i] == '\n')
            count++;
        i++;
    }
    while (str[i] != '\n') {
        if (str[i] == '\0')
            break;
        i++;
        lengt++;
    }
    return lengt;
}
