/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** menu.h
*/

#ifndef MENU_H
#define MENU_H
#include"all.h"
void sound_menu(sound_t *sound);
void about_menu(param_t *param, decor_t *decor);
void escape_menu(param_t *param, decor_t *decor);
void setting_menu(param_t *param, decor_t *decor);
void play_menu(param_t *param, decor_t *decor);
void title(decor_t *decor, param_t *param);
void menu(param_t *param, anim_t *anim, decor_t *decor, sound_t *sound);
void key_menu(param_t *params);
void click_menu(param_t *params);
void click_echap(mouse_t *mouse, param_t *params);
void click_strat(mouse_t *mouse, param_t *params);
#endif
