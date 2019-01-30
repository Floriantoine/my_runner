/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** anim_decor.c
*/

#include"../include/all.h"

void back(decor_t *decor, param_t *param)
{
    sfRenderWindow_drawSprite(param->window, decor->back.Sp, NULL);
}

void tree_front(decor_t *decor, param_t *params)
{
    sfVector2f scale = {1, 2};
    sfVector2f pos = {decor->tree_f.y, -10};
    sfVector2f pos2 = {decor->tree_f.y2, -10};
    sfSprite_setScale(decor-> tree_f.Sp, scale);
    sfSprite_setPosition(decor->tree_f.Sp, pos);
    sfRenderWindow_drawSprite(params->window, decor->tree_f.Sp, NULL);
    sfSprite_setPosition(decor->tree_f.Sp, pos2);
    sfRenderWindow_drawSprite(params->window, decor->tree_f.Sp, NULL);
}

void tree_back(decor_t *decor, param_t *params)
{
    sfVector2f pos = {decor->tree_b.y, -10};
    sfVector2f pos2 = {decor->tree_b.y2, -10};
    sfSprite_setPosition(decor->tree_b.Sp, pos);
    sfRenderWindow_drawSprite(params->window, decor->tree_b.Sp, NULL);
    sfSprite_setPosition(decor->tree_b.Sp, pos2);
    sfRenderWindow_drawSprite(params->window, decor->tree_b.Sp, NULL);
}

void grass(decor_t *decor, param_t *params)
{
    sfVector2f pos = {decor->grass.y, - 65};
    sfVector2f pos2 = {decor->grass.y2, - 65};
    sfSprite_setPosition(decor->grass.Sp, pos);
    sfRenderWindow_drawSprite(params->window, decor->grass.Sp, NULL);
    sfSprite_setPosition(decor->grass.Sp, pos2);
    sfRenderWindow_drawSprite(params->window, decor->grass.Sp, NULL);
}
