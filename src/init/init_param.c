/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** init_param.c
*/

#include"../../include/all.h"

void init_param_time(param_t *param)
{
    param->clock.text = sfText_create();
    sfVector2f pos = {80, 10};
    sfColor color = {153, 115, 0, 240};
    sfText_setOutlineColor(param->clock.text, sfBlack);
    sfText_setOutlineThickness(param->clock.text, 6);
    sfText_setPosition(param->clock.text, pos);
    sfText_setColor(param->clock.text, color);
    param->clock.font = sfFont_createFromFile("resources/time.ttf");
    sfText_setFont(param->clock.text, param->clock.font);
    sfText_setCharacterSize(param->clock.text, 100);
    param->life.life = 3;
}

void init_param_score(param_t *param)
{
    sfColor color = {153, 115, 0, 240};
    param->score.text = sfText_create();
    sfVector2f pos2 = {580, 10};
    sfText_setOutlineColor(param->score.text, sfBlack);
    sfText_setOutlineThickness(param->score.text, 6);
    sfText_setPosition(param->score.text, pos2);
    sfText_setColor(param->score.text, color);
    param->score.font = sfFont_createFromFile("resources/time.ttf");
    sfText_setFont(param->score.text, param->score.font);
    sfText_setCharacterSize(param->score.text, 100);
}

void init_param(param_t *param)
{
    sfVideoMode mode = {1920, 1080, 32};
    param->score.score = 0;
    param->level = 0;
    param->mouse.x = 600;
    param->switch_key = 1;
    param->mouse.y = 600;
    param->window = sfRenderWindow_create
    (mode, "RUNNER", sfResize | sfClose | 8, NULL);
    sfRenderWindow_setVerticalSyncEnabled(param->window, sfTrue);

    param->life.Tex = sfTexture_createFromFile("./resources/life.png", NULL);
    param->life.Sp = sfSprite_create();
    sfSprite_setTexture(param->life.Sp, param->life.Tex, sfTrue);
    param->life.TexB = sfTexture_createFromFile("./resources/lifeB.png", NULL);
    param->life.SpB = sfSprite_create();
    sfSprite_setTexture(param->life.SpB, param->life.TexB, sfTrue);

    init_param_time(param);
    init_param_score(param);
}
