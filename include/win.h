/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** win.h
*/

#ifndef WIN_H
#define WIN_H
#include"all.h"
void sound_win(sound_t *sound);
void escape_win(param_t *param, decor_t *decor);
void header_win(param_t *param, decor_t *decor);
void stars_win(param_t *param, decor_t *decor, anim_t *anim);
void win(param_t *param, anim_t *anim, decor_t *decor, sound_t *sound);
void key_win(param_t *params);
void click_win(param_t *params);
#endif
