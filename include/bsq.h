/*
** EPITECH PROJECT, 2021
** headers
** File description:
** headers
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#ifndef BSQ_H
    #define BSQ_H_

int check_back(char *str);
int check_line(char *str);
int check_rows(char *str);
int check_buffer(char *str);
int error_handling(int fd, char *str, int size);
char *size_one(char *str, int a);
char *other_size(int size, char *str, int place, int rows);
int sizebsq(int size, int result);
int placebsq(int size, int result, int i, int place);
void one_line(char *str);
int my_strlen_line(char *str, int line);
int my_atoi_first_line(char *str);
int my_atoi(char *str);
int my_strlen(char *str);
void my_putnbr(int nb);
void my_putchar(char c);
void my_putstr(char *str);
int bsq(char *pathname);
int openf(char const *file);
int get_size(char *pathname);
char *get_map(int fd, int size, char *buffer);
int end_line(char *str);
int small(int a, int b, int c);
void map_resolved(char *str, int size, int rows, int place);
void find(int line, int rows, int **array, char *str);
int **fill_top_left(int line, int rows, int **array, char *str);
void get_2darray(char *str);

#endif /* BSQ_H */
