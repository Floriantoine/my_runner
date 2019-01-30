/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** randy.c
*/

#include"../include/all.h"

int randy(int min, int max, int delete)
{
    srand(time (NULL));
    int out = min - 1;
    while ( out < min || out > max || out == delete ) {
        out = (min + rand() % max);
    }
    return (out);
}
