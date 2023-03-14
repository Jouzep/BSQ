/*
** EPITECH PROJECT, 2021
** error_handling
** File description:
** tools
*/

#include "../include/bsq.h"

int check_line(char *str)
{
    int b = end_line(str);
    int linef = 0;
    int line = my_atoi_first_line(str);

    for (int i = 0; str[i] != '\n'; i++)
        if (str[i] < '0' && str[i] > '9')
            return -1;
    while (str[b] != '\0') {
        if (str[b] == '\n')
            linef++;
        b++;
    }
    if (linef == line)
        return 0;
    else
        return -1;
}

int check_rows(char *str)
{
    int b = end_line(str);
    int rows = 0;

    while (str[b] != '\n') {
        b++;
        rows++;
    }
    b++;
    for (int crows = 0; str[b] != '\0'; b++) {
        crows++;
        if (str[b] == '\n') {
            if ((crows - 1) == rows)
                crows = 0;
            else
                return -1;
        }
    }
    return 0;
}

int check_back(char *str)
{
    int i = 0;
    int back = 0;

    while (str[i] != '\0') {
        i++;
        if (str[i] == '\n')
            back++;
    }
    if (back == 0)
        return -1;
    else
        return back;
}

int check_buffer(char *str)
{
    int i = end_line(str);

    while (str[i] != '\0') {
        if (str[i] == '.' || str[i] == 'o' || str[i] == '\n')
            i++;
        else
            return -1;
    }
    return 0;
}
