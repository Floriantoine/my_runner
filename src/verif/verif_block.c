/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** verif_block.c
*/

#include"../../include/all.h"
#include"../../include/verif.h"

void verif_block(anim_t *anim)
{
    int n = 0;

    while (n < anim->nb_block) {
        if ( anim->block[n].x > -250)
            anim->block[n].x -= anim->block[n].mvt;
        ++n;
    }
}

void verif_block_inf(anim_t *anim)
{
    int n = 0;

    while (n < anim->nb_block) {
        anim->block[n].x -= anim->block[n].mvt;
        if ( anim->block[n].x < -110 && n == 0)
            init_first_block(&anim->block[n]);
        else if ( anim->block[n].x < -110 && n > 0)
            init_block(&anim->block[n], &anim->block[n - 1]);
        ++n;
    }
}
