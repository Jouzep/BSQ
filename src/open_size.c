/*
** EPITECH PROJECT, 2021
** open
** File description:
** size
*/

#include "../include/bsq.h"

int openf(char const *file)
{
    int fd;

    fd = open(file, O_RDONLY);
    if (fd == -1)
        return 84;
    return fd;
}

int get_size(char *pathname)
{
    int size;
    int ret;
    struct stat buf;

    ret = stat(pathname, &buf);
    if (ret == -1)
        return -1;
    size = buf.st_size;
    return size;
}
