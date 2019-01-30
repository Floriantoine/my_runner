/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** test.c
*/

#include "../include/all.h"

void block(block_t *block, param_t *param)
{
    sfVector2f pos = {block->x, block->y};
    sfSprite_setPosition(block->Sp, pos);
    sfRenderWindow_drawSprite(param->window, block->Sp, NULL);
}

void print_block(anim_t *anim, param_t *param)
{
    int n = 0;
    while (n < anim->nb_block) {
        if (anim->block[n].x > -200 && anim->block[n].x < 1930)
            block(&anim->block[n], param);
        if ((anim->block[n].x < anim->zelda.x - 100) && anim->block[n].etat == 1
        && anim->block[n].type != 1) {
            ++param->score.score;
            anim->block[n].etat = 0;
        }
        ++n;
    }
}

void zelda(anim_t *anim, param_t *param)
{
    sfVector2f pos = {anim->zelda.x, anim->zelda.y};
    sfIntRect rect = {anim->zelda.sp_pos, 0, anim->zelda.sp_size, 50};

    sfSprite_setTextureRect(anim->zelda.Sp, rect);
    sfSprite_setScale(anim->zelda.Sp, anim->zelda.scale);
    sfSprite_setPosition(anim->zelda.Sp, pos);
    sfRenderWindow_drawSprite(param->window, anim->zelda.Sp, NULL);
}

void dash(anim_t *anim, param_t *param)
{
    sfVector2f pos = {anim->zelda.x - 180, anim->zelda.y + 100};
    sfIntRect rect = {anim->dash.sp_pos, 0, 80, 100};
    sfVector2f scale = {2, 2};

    if (anim->dash.loop > 3 && anim->dash.etat == 1) {
        if (anim->dash.sp_pos > 1000) {
            anim->dash.sp_pos = 0;
            anim->dash.etat = 0;
        } else
            anim->dash.sp_pos += 80;
        anim->dash.loop = 0;
    } else if (anim->dash.etat == 1)
        anim->dash.loop += 1;

    if (anim->dash.etat == 1) {
        sfSprite_setScale(anim->dash.Sp, scale);
        sfSprite_setTextureRect(anim->dash.Sp, rect);
        sfSprite_setPosition(anim->dash.Sp, pos);
        sfRenderWindow_drawSprite(param->window, anim->dash.Sp, NULL);
    }
}
