/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** key_menu.c
*/

#include"../../include/all.h"
#include"../../include/init_all.h"

void key_win(param_t *param)
{
    if (param->event.key.code == sfKeyEscape) {
        param->level = -1;
    } else if (param->event.key.code == sfKeyReturn)
        param->level = -1;
}
