/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** evt.c
*/

#include"../../include/all.h"

void key_press_pause(param_t *param)
{
    if (param->event.key.code == sfKeyEscape)
        param->level = 1;
}

void mouve_pause(param_t *param)
{
    param->mouse.x = param->event.mouseMove.x;
    param->mouse.y = param->event.mouseMove.y;
}

void evt_pause(param_t *param, sound_t *sound, anim_t *anim)
{
    if (param->event.type == sfEvtMouseMoved)
        mouve_pause(param);
    if (param->event.type == sfEvtKeyPressed)
        key_press_pause(param);
    if (param->event.type == sfEvtMouseButtonReleased)
        click_main_pause(param, sound, anim);
    if (param->event.type == sfEvtClosed){
        param->level = -1;
    }
}
