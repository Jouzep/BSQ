/*
** EPITECH PROJECT, 2021
** my_putnbr.c
** File description:
** put a nbr
*/

#include "../include/bsq.h"

void my_putnbr(int nb)
{
    int modulo = 0;

    if (nb > 9) {
        modulo = nb % 10;
        my_putnbr(nb / 10);
        my_putchar(modulo + '0');
    } else if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
        my_putnbr(nb);
    } else
        my_putchar(nb + '0');
}
