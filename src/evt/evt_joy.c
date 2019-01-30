/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** evt_joy.c
*/

#include"../../include/all.h"

void direction_dash(anim_t *anim)
{
    if ((sfJoystick_isButtonPressed(0, 5)
    || (sfJoystick_getAxisPosition(0, sfJoystickX) == 100))
    && anim->zelda.x < 960 )
        anim->zelda.x += 140;
    if ((sfJoystick_isButtonPressed(0, 4)
    || (sfJoystick_getAxisPosition(0, sfJoystickX) < -90))
    && anim->zelda.x > 948)
        anim->zelda.x -= 140;
}

void check_dash_joy(param_t *param, anim_t *anim, sound_t *sound)
{
    if ((sfJoystick_isButtonPressed(0, 5) || (sfJoystick_isButtonPressed(0, 4))
    || (sfJoystick_getAxisPosition(0, sfJoystickX) > 90)
    || (sfJoystick_getAxisPosition(0, sfJoystickX) < -90))) {
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
    direction_dash(anim);
}

void check_jump_joy(param_t *param, anim_t *anim, sound_t *sound)
{
    if (sfJoystick_isButtonPressed(0, 0) == sfTrue) {
        if (anim->zelda.U_D == 1 || anim->zelda.U_D == -1) {
            anim->zelda.U_D = 2;
            sfMusic_play(sound->jump2);
        }
        if (anim->zelda.U_D == 0) {
            anim->zelda.U_D = 1;
            sfMusic_play(sound->jump1);
        }
    }
}

void evt_joy(param_t *param, anim_t *anim, decor_t *decor, sound_t *sound)
{
    float cc = sfJoystick_getAxisPosition(0, sfJoystickY);
    param->switch_key = 0;
    if (sfJoystick_isButtonPressed(0, 6))
        param->level = -1;
        pause_main(param, decor, sound, anim);
    if (cc < -90 && anim->zelda.U_D != 0) {
        anim->zelda.U_D -= 3;
    }
    check_dash_joy(param, anim, sound);
    check_jump_joy(param, anim, sound);
}
