/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** destroy_sound.c
*/

#include"../../include/all.h"

void destroy_sound(sound_t *sound)
{
    sfMusic_destroy(sound->jump1);
    sfMusic_destroy(sound->jump2);
    sfMusic_destroy(sound->hit_s);
    sfMusic_destroy(sound->dash);
    sfMusic_destroy(sound->end);
    sfMusic_destroy(sound->frog);
    sfMusic_destroy(sound->jar_breack);
    sfMusic_destroy(sound->main_cur);
    sfMusic_destroy(sound->main_select);
    sfMusic_destroy(sound->main_theme);
    sfMusic_destroy(sound->sword_hit);
    sfMusic_destroy(sound->sword_in);
    sfMusic_destroy(sound->sword_out);
    sfMusic_destroy(sound->wild);
}

void sound_menu(sound_t *sound)
{
    if (sfMusic_getStatus(sound->wild) == 0)
        sfMusic_play(sound->wild);
    if (sfMusic_getStatus(sound->frog) == 0)
        sfMusic_play(sound->frog);
    if (sfMusic_getStatus(sound->main_theme) == 0)
        sfMusic_play(sound->main_theme);
}

void sound_level(sound_t *sound)
{
    if (sfMusic_getStatus(sound->wild) == 0)
        sfMusic_play(sound->wild);
    if (sfMusic_getStatus(sound->frog) == 0)
        sfMusic_play(sound->frog);
    if (sfMusic_getStatus(sound->main_theme) == 0)
        sfMusic_play(sound->main_theme);
}
