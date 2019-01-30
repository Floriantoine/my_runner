/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** levelinfin.c
*/

#include "../include/all.h"
#include"../include/end.h"
#include "../include/verif.h"
#include "../include/evt.h"

void check_all(param_t *param, anim_t *anim, decor_t *decor, sound_t *sound)
{
    verif_decor(&decor->tree_f);
    verif_decor(&decor->tree_b);
    verif_decor(&decor->grass);
    verif_link(param, anim);
    verif_skel(param, anim);
    if (param->infiny == 1)
        verif_block_inf(anim);
    else
        verif_block(anim);
    sound_level(sound);
}

void print_level(param_t *param, anim_t *anim, decor_t *decor)
{
    back(decor, param);
    tree_back(decor, param);
    zelda(anim, param);
    skel(anim, param);
    dash(anim, param);
    print_block(anim, param);
    grass(decor, param);
    tree_front(decor, param);
    life(param, anim);
    timing(param);
    score(param);
}

void level_infin(param_t *param, anim_t *anim, decor_t *decor, sound_t *sound)
{
    param->clock.clock = sfClock_create();
    new_block(anim);
    while (param->level == 1) {
        param->s_window = sfRenderWindow_getSize(param->window);
        while (sfRenderWindow_pollEvent(param->window, &param->event))
            evt_level(param, anim, decor, sound);
        check_all(param, anim, decor, sound);
        print_level(param, anim, decor);
        sfRenderWindow_display(param->window);
        if (colli(anim, param, sound) == 0)
            anim->zelda.touch = 1;
        if (param->life.life == 0)
            param->level = 0;
    }
}
