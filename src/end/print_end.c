/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** menuback.c
*/

#include"../../include/all.h"
#include"../../include/end.h"

void gm_end(param_t *param, decor_t *decor)
{
    sfVector2f scale = {2, 2};
    sfVector2f pos = {510, 0};
    sfSprite_setPosition(decor->end.Sp_gm, pos);
    sfSprite_setScale(decor->end.Sp_gm, scale);
    sfRenderWindow_drawSprite(param->window, decor->end.Sp_gm, NULL);
}

void setting_end(param_t *param, decor_t *decor)
{
    sfVector2f scale1 = {0.4, 0.4};
    sfVector2f pos1 = {60, 860};
    sfSprite_setPosition(decor->menu.Sp_set, pos1);
    sfSprite_setScale(decor->menu.Sp_set, scale1);
    sfRenderWindow_drawSprite(param->window, decor->menu.Sp_set, NULL);
}

void escape_end(param_t *param, decor_t *decor)
{
    sfVector2f scale2 = {0.6, 0.6};
    sfVector2f pos2 = {60, 70};
    sfSprite_setPosition(decor->menu.Sp_esc, pos2);
    sfSprite_setScale(decor->menu.Sp_esc, scale2);
    sfRenderWindow_drawSprite(param->window, decor->menu.Sp_esc, NULL);
}
