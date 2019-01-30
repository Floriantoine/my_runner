/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** verif_link.c
*/

#include"../../include/all.h"
#include"../../include/verif.h"

void verif_jump(param_t *params, anim_t *anim)
{
    int fall = 0;
    int n = anim->zelda.jump_y;
    while (n > anim->zelda.y && fall < 25) {
        n = n - 8;
        ++fall;
    }

    if (anim->zelda.y < anim->zelda.jump_y - 200 && anim->zelda.U_D == 1)
        anim->zelda.U_D = -1;
    if (anim->zelda.y < anim->zelda.jump_y - 300 && anim->zelda.U_D == 2)
        anim->zelda.U_D = -2;
    if (anim->zelda.U_D != 0)
        anim->zelda.y = anim->zelda.y - anim->zelda.U_D * (30 - fall);
}

void verif_link(param_t *param, anim_t *anim)
{
    verif_jump(param, anim);
    ++anim->zelda.loop;
    if (anim->zelda.loop > anim->zelda.mvt)
        sp_mvt(anim);
    if (anim->zelda.y < 720 && anim->zelda.U_D == 0 && anim->zelda.colli == 0)
        anim->zelda.U_D = -1;
    if (anim->zelda.U_D != 0 && anim->zelda.x < 960)
        anim->zelda.x += 3 ;
    if (anim->zelda.y > 720 && anim->zelda.U_D < 0)
        anim->zelda.U_D = 0;
    if (anim->zelda.y > 725)
        anim->zelda.y = 720;
    if (anim->zelda.x > 950)
        anim->zelda.x -= 2 ;
    if (anim->zelda.x < 950)
        anim->zelda.x += 2 ;
    if (anim->zelda.U_D == 0)
        anim->zelda.jump_y = anim->zelda.y;
}
