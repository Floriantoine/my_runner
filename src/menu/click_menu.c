/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** click_menu.c
*/

#include"../../include/all.h"

void click_start(mouse_t *mouse, param_t *params)
{
    if ((mouse->x >= 915 && mouse->x <= 1060
    && mouse->y >= 865 && mouse->y <= 996)
    || sfJoystick_isButtonPressed(0, 7)) {
        params->level = 1;
    }
}

void click_echap(mouse_t *mouse, param_t *params)
{
    if ((mouse->x >= 63 && mouse->x <= 151
    && mouse->y >= 75 && mouse->y <= 160)
    || sfJoystick_isButtonPressed(0, 6)) {
        params->level = -1;
    }
}

void click_about(mouse_t *mouse, param_t *params)
{
    if (mouse->x >= 1770 && mouse->x <= 1863
    && mouse->y >= 60 && mouse->y <= 150) {
        put_rule();
        params->level = -1;
    }
}

void click_menu(param_t *params)
{
    click_start(&params->mouse, params);
    click_echap(&params->mouse, params);
    click_about(&params->mouse, params);
}
