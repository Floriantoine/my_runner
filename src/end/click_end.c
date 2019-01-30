/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** click_menu.c
*/

#include"../../include/all.h"
#include"../../include/end.h"
#include"../../include/main.h"

void click_restart(mouse_t *mouse, param_t *params)
{
    if (mouse->x >= 915 && mouse->x <= 1060
    && mouse->y >= 865 && mouse->y <= 996) {
        params->level = 1;
        params->life.life = 3;
        params->score.score = 0;
    }
}

void click_echap_end(mouse_t *mouse, param_t *params)
{
    if (mouse->x >= 63 && mouse->x <= 151
    && mouse->y >= 75 && mouse->y <= 160) {
        params->level = -1;
    }
}

void click_end(param_t *params)
{
    click_restart(&params->mouse, params);
    click_echap_end(&params->mouse, params);
}
