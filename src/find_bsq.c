/*
** EPITECH PROJECT, 2021
** find_bsq
** File description:
** find_bsq
*/

#include "../include/bsq.h"

void map_resolved(char *str, int size, int rows, int place)
{
    int a = 0;

    if (size == 1)
        str = size_one(str, a);
    else
        str = other_size(size, str, place, rows);
    str = str + end_line(str);
    my_putstr(str);
}

void find(int line, int rows, int **l, char *str)
{
    int i = end_line(str) + rows + 2;
    int result;
    int place = 0;
    int size = 1;

    for (int b = 1; b < line; b++) {
        for (int a = 1; a < rows; a++) {
            if (str[i] == 'o')
                l[b][a] = result = 0;
            else {
                result = small(l[b - 1][a - 1], l[b - 1][a], l[b][a - 1]);
                l[b][a] = small(l[b - 1][a - 1], l[b - 1][a], l[b][a - 1]);
            }
            place = placebsq(size, result, i, place);
            size = sizebsq(size, result);
            i++;
        }
        i = i + 2;
    }
    map_resolved(str, size, rows, place);
}

void get_2darray(char *str)
{
    int line = my_atoi_first_line(str);
    int rows = my_strlen_line(str, 1);
    int **arr = malloc(sizeof(int*) * line);

    if (line == 1 || rows == 1)
        one_line(str);
    else {
        for (int i = 0; i < line; i++)
            arr[i] = malloc(sizeof(int) * rows);
        arr = fill_top_left(line, rows, arr, str);
        find(line, rows, arr, str);
        for (int i = 0; i < line; i++)
            free(arr[i]);
    }
    free(arr);
}
