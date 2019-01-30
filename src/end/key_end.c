/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** key_menu.c
*/

#include"../../include/all.h"
#include"../../include/main.h"
#include"../../include/init_all.h"

void key_end(param_t *param, anim_t *anim)
{
    if (param->event.key.code == sfKeyEscape
    || sfJoystick_isButtonPressed(0, 6)) {
        param->level = -1;
    } else if (param->event.key.code == sfKeyReturn
    || sfJoystick_isButtonPressed(0, 7)) {
        param->level = 1;
        param->life.life = 3;
        param->score.score = 0;
        if (param->infiny == 0)
            load_map(param->map_filename, anim);
    }
}
