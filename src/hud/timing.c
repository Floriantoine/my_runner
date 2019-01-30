/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** timing.c
*/

#include"../../include/all.h"

void timing(param_t *param)
{
    param->clock.timer = sfClock_getElapsedTime(param->clock.clock);
    int print = sfTime_asSeconds(param->clock.timer);
    if (print == 99)
        param->level = -1;
    char timer[] = "TIME : 00";
    timer[7] = (99 - print) / 10 + 48;
    timer[8] = (99 - print) % 10 + 48;
    sfText_setString(param->clock.text, timer);
    sfRenderWindow_drawText(param->window, param->clock.text, NULL);
}
