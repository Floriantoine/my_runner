/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** level1.c
*/

#include "../include/all.h"
#include "../include/verif.h"
#include "../include/evt.h"

void check_end_lvl(param_t *param, anim_t *anim, decor_t *decor, sound_t *sound)
{
    int i = 0;
    int check = 0;

    while (i < anim->nb_block && check == 0) {
        if (anim->block[i].x >= anim->zelda.x - 300)
            ++check;
        ++i;
    }
    if (check == 0)
        param->level = 99;
}

void level(param_t *param, anim_t *anim, decor_t *decor, sound_t *sound)
{
    param->clock.clock = sfClock_create();
    while (param->level == 1) {
        param->s_window = sfRenderWindow_getSize(param->window);
        while (sfRenderWindow_pollEvent(param->window, &param->event)) {
            evt_level(param, anim, decor, sound);
        }
        check_all(param, anim, decor, sound);
        check_end_lvl(param, anim, decor, sound);
        print_level(param, anim, decor);
        sfRenderWindow_display(param->window);
        if (colli(anim, param, sound) == 0)
            anim->zelda.touch = 1;
        if (param->life.life == 0)
            param->level = 88;
    }
}
