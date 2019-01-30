/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** init_anim.h
*/

#ifndef INIT_ALL_H
#define INIT_ALL_H
void tab_sp(tab_sp_t **tab_sp);
void init_decor(decor_t *decor);
void init_block(block_t *block, block_t *bloc_old);
void init_sound(sound_t *sound);
void init_param(param_t *param);
void init_loading(anim_t *anim);
void init_anim(decor_t *decor, anim_t *anim);
void init_level(decor_t *decor);
void init_skel(anim_t *anim, param_t *param);
void load_jar1(block_t *block);
void load_jar2(block_t *block);
void load_block(block_t *block);
void load_shrub(block_t *block);
void load_shrub_long(block_t *block);
void init_menu(decor_t *decor);
#endif
