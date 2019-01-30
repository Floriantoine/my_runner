/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** menuback.c
*/

#include"../../include/all.h"
#include"../../include/win.h"

void stars_win(param_t *param, decor_t *decor, anim_t *anim)
{
    sfVector2f scale = {0.8, 0.8};
    sfVector2f pos = {300, 230};
    decor->win.Tex_sc =
    sfTexture_createFromFile("./resources/gui/you_win/star_4.png", NULL);
    if (param->score.score == anim->nb_block)
        decor->win.Tex_sc =
        sfTexture_createFromFile("./resources/gui/you_win/star_1.png", NULL);
    if (param->score.score >  anim->nb_block / 2)
        decor->win.Tex_sc =
        sfTexture_createFromFile("./resources/gui/you_win/star_2.png", NULL);
    if (param->score.score > anim->nb_block / 3
    && param->score.score <= anim->nb_block / 2)
        decor->win.Tex_sc =
        sfTexture_createFromFile("./resources/gui/you_win/star_3.png", NULL);
    decor->win.Sp_sc = sfSprite_create();
    sfSprite_setTexture(decor->win.Sp_sc, decor->win.Tex_sc, sfTrue);
    sfSprite_setPosition(decor->win.Sp_sc, pos);
    sfSprite_setScale(decor->win.Sp_sc, scale);
    sfRenderWindow_drawSprite(param->window, decor->win.Sp_sc, NULL);
}

void header_win(param_t *param, decor_t *decor)
{
    sfVector2f pos1 = {60, 0};
    sfSprite_setPosition(decor->win.Sp_header, pos1);
    sfRenderWindow_drawSprite(param->window, decor->win.Sp_header, NULL);
}

void escape_win(param_t *param, decor_t *decor)
{
    sfVector2f scale2 = {0.6, 0.6};
    sfVector2f pos2 = {60, 70};
    sfSprite_setPosition(decor->menu.Sp_esc, pos2);
    sfSprite_setScale(decor->menu.Sp_esc, scale2);
    sfRenderWindow_drawSprite(param->window, decor->menu.Sp_esc, NULL);
}
