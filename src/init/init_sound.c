/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** init_sound.c
*/

#include"../../include/all.h"

void init_sound(sound_t *sound)
{
    sound->jump1 = sfMusic_createFromFile("resources/sound/jump1.ogg");
    sound->jump2 = sfMusic_createFromFile("resources/sound/jump2.ogg");
    sound->hit_s = sfMusic_createFromFile("resources/sound/hit_s.ogg");
    sound->sword_out = sfMusic_createFromFile("resources/sound/sword_out.ogg");
    sound->sword_hit = sfMusic_createFromFile("resources/sound/sword_hit.ogg");
    sound->sword_in = sfMusic_createFromFile("resources/sound/sword_in.ogg");
    sound->end = sfMusic_createFromFile("resources/sound/end.ogg");
    sound->win = sfMusic_createFromFile("resources/sound/win.ogg");
    sound->jar_breack =
    sfMusic_createFromFile("resources/sound/jar_breack.ogg");
    sound->main_cur = sfMusic_createFromFile("resources/sound/main_cur.ogg");
    sound->main_select =
    sfMusic_createFromFile("resources/sound/main_select.ogg");
    sound->wild = sfMusic_createFromFile("resources/sound/wild.ogg");
    sound->frog = sfMusic_createFromFile("resources/sound/frog.ogg");
    sound->main_theme =
    sfMusic_createFromFile("resources/sound/main_theme.ogg");
    sfMusic_setVolume(sound->main_theme, 30);
    sound->dash = sfMusic_createFromFile("resources/sound/dash.ogg");
}
