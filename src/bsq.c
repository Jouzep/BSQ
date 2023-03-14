/*
** EPITECH PROJECT, 2021
** bsq
** File description:
** bsq
*/

#include "../include/bsq.h"

char *get_map(int fd, int size, char *buffer)
{
    read(fd, buffer, size);
    buffer[size] = '\0';
    return buffer;
}

int bsq(char *pathname)
{
    int fd = openf(pathname);
    int size = get_size(pathname);
    char *buffer = malloc(sizeof(char) * (size + 1));

    if (fd == -1 || size == -1)
        return -1;
    if (error_handling(fd, buffer, size) == -1)
        return -1;
    buffer = get_map(fd, size, buffer);
    get_2darray(buffer);
    free (buffer);
    return 0;
}

int error_handling(int fd, char *str, int size)
{
    int ret = read(fd, str, size);

    if (check_back(str) == -1 || size == 0)
        return -1;
    if (ret == -1)
        return -1;
    if (check_line(str) == -1)
        return -1;
    if (check_rows(str) == -1)
        return -1;
    if (check_buffer(str) == -1)
        return -1;
    return 0;
}
