/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** evt_key.c
*/

#include"../../include/all.h"

void check_dash(param_t *param, anim_t *anim, sound_t *sound)
{
    if ((param->event.key.code == sfKeyLeft && anim->zelda.x > 948)
    || (param->event.key.code == sfKeyRight && anim->zelda.x < 960)) {
        anim->zelda.sp_pos = 214;
        anim->zelda.sp_size = 30;
        anim->zelda.sp_max = 312;
        anim->zelda.mvt = 6;
        anim->zelda.loop = 0;
        sfMusic_play(sound->dash);
        sfMusic_play(sound->jump1);
        if (anim->zelda.y > 718)
            anim->dash.etat = 1;
    }
    if (param->event.key.code == sfKeyRight && anim->zelda.x < 960)
        anim->zelda.x += 140;
    if (param->event.key.code == sfKeyLeft && anim->zelda.x > 948)
        anim->zelda.x -= 140;
}

void check_jump(param_t *param, anim_t *anim, sound_t *sound)
{
    if ((param->event.key.code == sfKeySpace
    || param->event.key.code == sfKeyUp)
    && (anim->zelda.U_D == 1 || anim->zelda.U_D == -1)) {
        anim->zelda.U_D = 2;
        sfMusic_play(sound->jump2);
    }
    if ((param->event.key.code == sfKeySpace
    || param->event.key.code == sfKeyUp) && anim->zelda.U_D == 0) {
        anim->zelda.U_D = 1;
        sfMusic_play(sound->jump1);
    }
}

void evt_key(param_t *param, anim_t *anim, decor_t *decor, sound_t *sound)
{
    if (param->event.key.code == sfKeyEscape) {
        param->level = 42;
        pause_main(param, decor, sound, anim);
    }
    if (param->event.key.code == sfKeyDown && anim->zelda.U_D != 0)
        anim->zelda.U_D -= 3;
    check_dash(param, anim, sound);
    check_jump(param, anim, sound);
}
