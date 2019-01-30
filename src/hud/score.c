/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** timing.c
*/

#include"../../include/all.h"

void score(param_t *param)
{
    char timer[] = "SCORE : 00";
    timer[8] = (param->score.score) / 10 + 48;
    timer[9] = (param->score.score) % 10 + 48;
    sfText_setString(param->score.text, timer);
    sfRenderWindow_drawText(param->window, param->score.text, NULL);
}
