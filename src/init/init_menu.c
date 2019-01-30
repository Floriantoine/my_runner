/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** init_menu.c
*/

#include"../../include/all.h"
#include"../../include/init_all.h"

void init_text_menu(decor_t *decor)
{
    decor->menu.text = sfText_create();
    sfColor color = {153, 115, 0, 240};
    sfText_setOutlineColor(decor->menu.text, sfBlack);
    sfText_setOutlineThickness(decor->menu.text, 6);
    sfText_setColor(decor->menu.text, color);
    decor->menu.font = sfFont_createFromFile("resources/time.ttf");
    sfText_setFont(decor->menu.text, decor->menu.font);
    sfText_setCharacterSize(decor->menu.text, 100);
    decor->menu.y_text = 25;
    decor->menu.loop = 0;
    decor->menu.mvt = 5;
}

void init_background_menu(decor_t *decor)
{
    decor->menu.Tex = sfTexture_createFromFile("./resources/menu.jpg", NULL);
    decor->menu.Sp = sfSprite_create();
    sfSprite_setTexture(decor->menu.Sp, decor->menu.Tex, sfTrue);
    decor->menu.Tex_play =
    sfTexture_createFromFile("./resources/gui/menu/play.png", NULL);
    decor->menu.Sp_play = sfSprite_create();
    sfSprite_setTexture(decor->menu.Sp_play, decor->menu.Tex_play, sfTrue);
}

void init_menu(decor_t *decor)
{
    decor->menu.Tex_set =
    sfTexture_createFromFile("./resources/gui/menu/setting.png", NULL);
    decor->menu.Sp_set = sfSprite_create();
    sfSprite_setTexture(decor->menu.Sp_set, decor->menu.Tex_set, sfTrue);

    decor->menu.Tex_esc =
    sfTexture_createFromFile("./resources/gui/menu/close_2.png", NULL);
    decor->menu.Sp_esc = sfSprite_create();
    sfSprite_setTexture(decor->menu.Sp_esc, decor->menu.Tex_esc, sfTrue);

    decor->menu.Tex_abt =
    sfTexture_createFromFile("./resources/gui/menu/about.png", NULL);
    decor->menu.Sp_abt = sfSprite_create();
    sfSprite_setTexture(decor->menu.Sp_abt, decor->menu.Tex_abt, sfTrue);

    init_background_menu(decor);
    init_text_menu(decor);
}
