/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** menuback.c
*/

#include"../../include/menu.h"

void play_menu(param_t *param, decor_t *decor)
{
    sfVector2f scale = {0.3, 0.3};
    sfVector2f pos = {915, 860};
    sfSprite_setPosition(decor->menu.Sp_play, pos);
    sfSprite_setScale(decor->menu.Sp_play, scale);
    sfRenderWindow_drawSprite(param->window, decor->menu.Sp_play, NULL);
}

void setting_menu(param_t *param, decor_t *decor)
{
    sfVector2f scale1 = {0.4, 0.4};
    sfVector2f pos1 = {60, 860};
    sfSprite_setPosition(decor->menu.Sp_set, pos1);
    sfSprite_setScale(decor->menu.Sp_set, scale1);
    sfRenderWindow_drawSprite(param->window, decor->menu.Sp_set, NULL);
}

void escape_menu(param_t *param, decor_t *decor)
{
    sfVector2f scale2 = {0.6, 0.6};
    sfVector2f pos2 = {60, 70};
    sfSprite_setPosition(decor->menu.Sp_esc, pos2);
    sfSprite_setScale(decor->menu.Sp_esc, scale2);
    sfRenderWindow_drawSprite(param->window, decor->menu.Sp_esc, NULL);
}

void about_menu(param_t *param, decor_t *decor)
{
    sfVector2f scale3 = {0.4, 0.4};
    sfVector2f pos3 = {1760, 50};
    sfSprite_setPosition(decor->menu.Sp_abt, pos3);
    sfSprite_setScale(decor->menu.Sp_abt, scale3);
    sfRenderWindow_drawSprite(param->window, decor->menu.Sp_abt, NULL);
}
