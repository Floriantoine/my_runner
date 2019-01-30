/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** init_anim.c
*/

#include"../../include/all.h"
#include"../../include/init_all.h"

void init_link(anim_t * anim)
{
    anim->zelda.Tex =
    sfTexture_createFromFile("./resources/zelda_move.png", NULL);
    anim->zelda.Sp = sfSprite_create();
    sfSprite_setTexture(anim->zelda.Sp, anim->zelda.Tex, sfTrue);
    anim->zelda.sp_pos = 0;
    anim->zelda.sp_size = 38;
    anim->zelda.mvt = 2;
    anim->zelda.loop = 0;
    anim->zelda.U_D = 0;
    anim->zelda.y = 720;
    anim->zelda.x = 950;
    anim->zelda.life = 3;
    anim->zelda.sp_max = 210;
    anim->zelda.touch = 1;
    anim->zelda.scale.x = 4;
    anim->zelda.scale.y = 4;
    anim->zelda.colli = 0;
    anim->zelda.jump_y = 750;
}

void init_loading(anim_t *anim)
{
    anim->load.Tex = sfTexture_createFromFile("./resources/loading.png", NULL);
    anim->load.Sp = sfSprite_create();
    sfSprite_setTexture(anim->load.Sp, anim->load.Tex, sfTrue);
    anim->load.Tex_texte =
    sfTexture_createFromFile("./resources/gui/load_bar/text.png", NULL);
    anim->load.Sp_texte = sfSprite_create();
    sfVector2f pos = {200, 920};
    sfSprite_setTexture(anim->load.Sp_texte, anim->load.Tex_texte, sfTrue);
    sfSprite_setPosition(anim->load.Sp_texte, pos);
    anim->load.Tex_bar =
    sfTexture_createFromFile("./resources/gui/load_bar/1.png", NULL);
    anim->load.Sp_bar = sfSprite_create();
    sfSprite_setTexture(anim->load.Sp_bar, anim->load.Tex_bar, sfTrue);
    pos.x += 280;
    sfSprite_setPosition(anim->load.Sp_bar, pos);
}

void init_dash(anim_t *anim)
{
    anim->dash.Tex = sfTexture_createFromFile("./resources/dash.png", NULL);
    anim->dash.Sp = sfSprite_create();
    sfSprite_setTexture(anim->dash.Sp, anim->dash.Tex, sfTrue);
    anim->dash.etat = 0;
    anim->dash.loop = 0;
    anim->dash.sp_pos = 0;
}

void init_anim(decor_t *decor, anim_t *anim)
{
    tab_sp(&anim->zelda.tab_sp);
    init_link(anim);
    init_loading(anim);
    init_dash(anim);
    anim->nb_block = 0;
    anim->load.Tex_enter =
    sfTexture_createFromFile("./resources/enter.png", NULL);
    anim->load.Sp_enter = sfSprite_create();
    sfSprite_setTexture(anim->load.Sp_enter, anim->load.Tex_enter, sfTrue);
    sfVector2f pos = {1650, 780};
    sfSprite_setPosition(anim->load.Sp_enter, pos);
}
