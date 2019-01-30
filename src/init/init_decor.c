/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** init_decor.c
*/

#include"../../include/all.h"
#include"../../include/init_all.h"

void init_tree_b(decor_t *decor)
{
    decor->tree_b.Tex = sfTexture_createFromFile("./resources/back.png", NULL);
    decor->tree_b.Sp = sfSprite_create();
    sfSprite_setTexture(decor->tree_b.Sp, decor->tree_b.Tex, sfTrue);
    decor->tree_b.y = 0;
    decor->tree_b.y2 = 3838;
    decor->tree_b.mvt = 10;
    decor->tree_b.tall = 3830;
}

void init_tree_f(decor_t *decor)
{
    decor->tree_f.Tex = sfTexture_createFromFile("./resources/tree.png", NULL);
    decor->tree_f.Sp = sfSprite_create();
    sfSprite_setTexture(decor->tree_f.Sp, decor->tree_f.Tex, sfTrue);
    decor->tree_f.y = 0;
    decor->tree_f.y2 = 2000;
    decor->tree_f.mvt = 40;
    decor->tree_f.tall = 2000;
}

void init_back(decor_t *decor)
{
    decor->back.Tex =
    sfTexture_createFromFile("./resources/tree_back.png", NULL);
    decor->back.Sp = sfSprite_create();
    sfSprite_setTexture(decor->back.Sp, decor->back.Tex, sfTrue);
}

void init_grass(decor_t *decor)
{
    decor->grass.Tex = sfTexture_createFromFile("./resources/grass.png", NULL);
    decor->grass.Sp = sfSprite_create();
    sfSprite_setTexture(decor->grass.Sp, decor->grass.Tex, sfTrue);
    decor->grass.y = 0;
    decor->grass.y2 = 1910;
    decor->grass.mvt = 35;
    decor->grass.tall = 1910;
}

void init_decor(decor_t *decor)
{
    init_tree_b(decor);
    init_tree_f(decor);
    init_back(decor);
    init_grass(decor);
    init_level(decor);
    init_menu(decor);
}
