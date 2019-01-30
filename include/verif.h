/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** verif.h
*/

#ifndef VERIF_H
#define VERIF_H
void verif_decor(tree_t *tree);
void verif_skel(param_t *param, anim_t *anim);
void verif_link(param_t *params, anim_t *anim);
void verif_block_inf(anim_t *anim);
void verif_block(anim_t *anim);
void init_first_block(block_t *block);
void init_block(block_t *block, block_t *block_old);
void sp_mvt(anim_t *anim);
#endif
