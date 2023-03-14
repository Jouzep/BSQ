/*
** EPITECH PROJECT, 2021
** bsqtool
** File description:
** toolbox for bsq
*/

#include "../include/bsq.h"

void one_line(char *str)
{
    str = str + end_line(str);
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == '.') {
            str[i] = 'x';
            break;
        }
    my_putstr(str);
}

int end_line(char *str)
{
    int i = 0;

    while (str[i] != '\n') {
        i++;
    }
    return (i + 1);
}

int small(int a, int b, int c)
{
    if ((a < b) && (a < c))
        return (a + 1);
    else if (b < c)
        return (b + 1);
    else
        return (c + 1);
}

int **fill_top_left(int line, int rows, int **array, char *str)
{
    int i = end_line(str);
    int a = 0;

    for (int b = i; str[b] != '\n'; b++) {
        if (str[b] == 'o')
            array[0][a] = 0;
        else
            array[0][a] = 1;
        a++;
    }
    for (int c = 0; c != line; c++) {
        if (str[i] == 'o')
            array[c][0] = 0;
        else
            array[c][0] = 1;
        i = i + (rows + 1);
    }
    return (array);
}
