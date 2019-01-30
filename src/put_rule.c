/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** put_rule.c
*/

#include"../include/all.h"

int put_rule(void)
{
    my_putstr("Finite runner created with CSFML.\n\n", 1);
    my_putstr("USAGE\n", 1);
    my_putstr("  ./my_runner map.txt\n\n\n", 1);
    my_putstr("OPTIONS\n", 1);
    my_putstr("  -i\t\tlaunch the game in infinity mode.\n", 1);
    my_putstr("  -h\t\tprint the usage and quit.\n\n", 1);
    my_putstr("USER INTERACTIONS\n", 1);
    my_putstr(" SPACE_KEY jump.\n", 1);
    my_putstr(" Right-Left Dash.\n", 1);
    my_putstr(" Mouse-Click Attack\n", 1);

    return (0);
}
