/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** life.c
*/

#include"../..//include/all.h"

void dead_life(param_t *param, int a, int x, sfVector2f scale)
{
    while (a < 3) {
        sfVector2f pos = {x, 50};
        sfSprite_setTexture(param->life.SpB, param->life.TexB, sfTrue);
        sfSprite_setScale(param->life.SpB, scale);
        sfSprite_setPosition(param->life.SpB, pos);
        sfRenderWindow_drawSprite(param->window, param->life.SpB, NULL);
        x = x - 160;
        a++;
    }
}

void life(param_t *param, anim_t *anim)
{
    int a = 0;
    int x = 1800;
    sfVector2f scale = {0.8, 0.8};

    while (a != param->life.life) {
        sfVector2f pos = {x, 40};
        sfSprite_setTexture(param->life.Sp, param->life.Tex, sfTrue);
        sfSprite_setScale(param->life.Sp, scale);
        sfSprite_setPosition(param->life.Sp, pos);
        sfRenderWindow_drawSprite(param->window, param->life.Sp, NULL);
        x = x - 160;
        a++;
    }
    dead_life(param, a, x, scale);
}
