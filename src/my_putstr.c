/*
** EPITECH PROJECT, 2018
** my_putstr.c
** File description:
** one-by-one
*/

#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<errno.h>
#include<unistd.h>

void my_putchar(char c, int argc)
{
    write(argc, &c, 1);
}

int my_putstr( char const *str, int argc)
{
    int n = 0;

    while (str[n] != '\0'){
        my_putchar(str[n], argc);
        n++;
    }
    return (0);
}
