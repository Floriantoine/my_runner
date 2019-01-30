/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** evt_level1.c
*/

#include"../../include/all.h"
#include"../../include/evt.h"

void mouse_button(param_t *param, anim_t *anim, decor_t *decor, sound_t *sound)
{
    sfMusic_play(sound->sword_out);
    sfMusic_play(sound->sword_hit);
    sfMusic_play(sound->sword_in);
    anim->zelda.sp_pos = 350;
    anim->zelda.sp_size = 40;
    anim->zelda.sp_max = 721;
    anim->zelda.loop = 0;
}

void check_in(param_t *param, anim_t *anim, decor_t *decor, sound_t *sound)
{
    if ((param->event.type == sfEvtJoystickButtonPressed
    || param->event.type == sfEvtJoystickMoved) && param->switch_key == 1)
        evt_joy(param, anim, decor, sound);
    if ((param->event.type == sfEvtMouseButtonPressed
    || sfJoystick_isButtonPressed(0, 1))
    && anim->zelda.sp_max == 210 && anim->zelda.U_D == 0)
        mouse_button(param, anim, decor, sound);
    if (param->event.type == sfEvtKeyPressed)
        evt_key(param, anim, decor, sound);
}

void evt_level(param_t *param, anim_t *anim, decor_t *decor, sound_t *sound)
{

    if (param->event.type ==  sfEvtMouseMoved) {
        param->mouse.x = param->event.mouseMove.x;
        param->mouse.y = param->event.mouseMove.y;
    }
    if (param->event.type == sfEvtClosed)
        param->level = -1;
    param->switch_key = 1;
    check_in(param, anim, decor, sound);
}
