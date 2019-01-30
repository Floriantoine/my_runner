/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** sfRenderWindow_pollEvent.c
*/

#include "../include/all.h"
#include "../include/menu.h"
#include"../include/end.h"
#include"../include/win.h"

int check_game(param_t *param, anim_t *anim, sound_t *sound, decor_t *decor)
{
    loading(param, anim, decor, sound);
    if (param->level == 1 && param->infiny == 0)
        level(param, anim, decor, sound);
    if (param->level == 1 && param->infiny == 1)
        level_infin(param, anim, decor, sound);
}

int body(param_t *param, anim_t *anim, sound_t *sound, decor_t *decor)
{
    sfRenderWindow_setKeyRepeatEnabled(param->window, sfFalse);
    sfRenderWindow_setFramerateLimit(param->window, 30);
    while (sfRenderWindow_isOpen(param->window) && param->level >= 0) {
        if (param->level == 0)
            menu(param, anim, decor, sound);
        if (param->level == 1)
            check_game(param, anim, sound, decor);
        if (param->level == 88)
            end(param, anim, decor, sound);
        if (param->level == 99)
            win(param, anim, decor, sound);
    }
    sfRenderWindow_close(param->window);
    destroy_sound(sound);
    sfRenderWindow_destroy(param->window);
    return (0);
}
