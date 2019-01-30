/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** value_zelda.c
*/

#include"../include/all.h"

void sp_size(anim_t *anim)
{
    int n = 0;

    while (anim->zelda.tab_sp[n].sp_pos != anim->zelda.sp_pos) {
        ++n;
    }
    anim->zelda.sp_size = anim->zelda.tab_sp[n].sp_size;
}

void sp_mvt(anim_t *anim)
{
    anim->zelda.sp_pos = anim->zelda.sp_pos + anim->zelda.sp_size;
    if (anim->zelda.sp_pos > anim->zelda.sp_max) {
        anim->zelda.sp_pos = 0;
        anim->zelda.sp_max = 210;
        anim->zelda.mvt = 2;
    }
    if (anim->zelda.sp_max != 312) {
        if (anim->zelda.U_D != 0 && anim->zelda.U_D != 2)
            anim->zelda.sp_pos = 158;
        if (anim->zelda.U_D == 2 && anim->zelda.sp_max != 312)
            anim->zelda.sp_pos = 38;
    }
    sp_size(anim);
    anim->zelda.loop = 0;
}
