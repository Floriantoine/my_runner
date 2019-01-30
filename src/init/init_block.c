/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** init_block.c
*/

#include"../../include/all.h"
#include"../../include/init_all.h"

void rand_type(block_t *block, int nb)
{
    if (nb == 1)
        load_jar1(block);
    if (nb == 2)
        load_jar2(block);
    if (nb == 3)
        load_block(block);
    if (nb == 4)
        load_shrub(block);
    if (nb == 5)
        load_shrub_long(block);
    block->Sp = sfSprite_create();
    sfSprite_setTexture(block->Sp, block->Tex, sfTrue);
}

void init_block(block_t *block, block_t *block_old)
{
    block->mvt = 10;
    block->etat = 1;
    block->y = 890;
    block->x =
    randy(1920 + block_old->x, 2400 + block_old->x, block_old->x);
    int nb = randy(1, 5, 11);
    rand_type(block, nb);
}

void init_first_block(block_t *block)
{
    block->mvt = 10;
    block->etat = 1;
    block->y = 890;
    block->x = randy(1920, 2000, 0);
    int nb = randy(1, 5, 11);
    rand_type(block, nb);
}

void new_block(anim_t *anim)
{
    ++anim->nb_block;
    anim->block = malloc(sizeof(block_t) * anim->nb_block + 1);
    anim->block[anim->nb_block - 1].x = -200;
    anim->block[anim->nb_block - 1].y = -80;
    anim->block[anim->nb_block - 1].mvt = 0;
    anim->block[anim->nb_block - 1].etat = 1;
}
