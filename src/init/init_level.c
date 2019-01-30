/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** init_end.c
*/

#include"../../include/all.h"

void init_end_back(decor_t *decor)
{
    decor->end.Tex = sfTexture_createFromFile("./resources/end.png", NULL);
    decor->end.Sp = sfSprite_create();
    sfSprite_setTexture(decor->end.Sp, decor->end.Tex, sfTrue);

    decor->end.Tex_gm =
    sfTexture_createFromFile("./resources/game_over.png", NULL);
    decor->end.Sp_gm = sfSprite_create();
    sfSprite_setTexture(decor->end.Sp_gm, decor->end.Tex_gm, sfTrue);
}

void init_win_back(decor_t *decor)
{
    decor->win.Tex = sfTexture_createFromFile("./resources/win.jpg", NULL);
    decor->win.Sp = sfSprite_create();
    sfSprite_setTexture(decor->win.Sp, decor->win.Tex, sfTrue);
    decor->win.Tex_header =
    sfTexture_createFromFile("./resources/gui/you_win/header.png", NULL);
    decor->win.Sp_header = sfSprite_create();
    sfSprite_setTexture(decor->win.Sp_header, decor->win.Tex_header, sfTrue);
}

void init_level(decor_t *decor)
{
    init_end_back(decor);
    init_win_back(decor);
}
