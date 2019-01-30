/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** my.h
*/

#ifndef MY_H
#define MY_H
void click_main_pause(param_t *params, sound_t *sound, anim_t *anim);
void evt_pause(param_t *param, sound_t *sound, anim_t *anim);
void pause_main(param_t *param, decor_t *decor, sound_t *sound, anim_t *anim);
void skel(anim_t *anim, param_t *param);
void sound_level(sound_t *sound);
void my_putchar(char c, int argc);
int put_rule(void);
int my_putstr( char const *str, int argc);
void new_block(anim_t *anim);
void level_infin(param_t *param, anim_t *anim, decor_t *decor, sound_t *sound);
void score(param_t *param);
void tremor(param_t *param);
int colli(anim_t *anim, param_t *param, sound_t *sound);
void verif_decor(tree_t *tree);
void verif_zelda(param_t *params, anim_t *anim);
void verif_block_inf(anim_t *anim);
void verif_block(anim_t *anim);
void grass(decor_t *decor, param_t *params);
void tree_back(decor_t *decor, param_t *params);
void tree_front(decor_t *decor, param_t *params);
void check_all(param_t *param, anim_t *anim, decor_t *decor, sound_t *sound);
void check_all_inf
(param_t *param, anim_t *anim, decor_t *decor, sound_t *sound);
void print_level(param_t *param, anim_t *anim, decor_t *decor);
void destroy_sound(sound_t *sound);
int body(param_t *params, anim_t *anim, sound_t *sound, decor_t *decor);
void level(param_t *params, anim_t *anim, decor_t *decor, sound_t *sound);
void back(decor_t *decor, param_t *params);
void print_block(anim_t *anim, param_t *param);
void rand_texture(sfTexture *Tex, block_t *block);
void evt_level(param_t *params, anim_t *anim, decor_t *decor, sound_t *sound);
void zelda(anim_t *anim, param_t *params);
void rand_type(block_t *block, int nb);
int randy(int min, int max, int suppr);
void timing(param_t *param);
void life(param_t *param, anim_t *anim);
void loading
(param_t *param, anim_t *anim, decor_t *decor, sound_t *sound);
void dash(anim_t *anim, param_t *param);
void evt_joy(param_t *param, anim_t *anim, decor_t *decor, sound_t *sound);
#endif
