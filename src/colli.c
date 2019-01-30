/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** colli.c
*/

#include"../include/all.h"

int colli_jar(anim_t *anim, param_t *param, sound_t *sound, int n)
{
    anim->block[n].Tex =
    sfTexture_createFromFile("./resources/jar1_break.png", NULL);
    sfSprite_setTexture(anim->block[n].Sp, anim->block[n].Tex, sfTrue);
    if (anim->zelda.sp_max == 721 && anim->block[n].etat == 1) {
        sfMusic_play(sound->jar_breack);
        ++param->score.score;
        anim->block[n].etat = 0;
    } else if (anim->block[n].etat == 1) {
        sfMusic_play(sound->jar_breack);
        sfMusic_play(sound->hit_s);
        --param->life.life;
        anim->block[n].etat = 0;
    } else {
        return (1);
    }
    return (0);
}

int colli_wall(anim_t *anim, param_t *param, sound_t *sound, int n)
{
    if (anim->block[n].etat == 1) {
        sfMusic_play(sound->hit_s);
        --param->life.life;
        anim->block[n].etat = 0;
    }
    return (0);
}

int colli_shrub(anim_t *anim, param_t *param, sound_t *sound, int n)
{
    sfMusic_play(sound->hit_s);
    if (anim->zelda.y < anim->block[n].y - 135) {
        anim->zelda.U_D = 0;
        anim->zelda.jump_y = anim->zelda.y;
        anim->zelda.y = anim->block[n].y - 190;
        anim->zelda.colli = 1;
        return (0);
    } else if (anim->zelda.y > anim->block[n].y + 45) {
        if (anim->zelda.U_D > 0)
            anim->zelda.U_D *= -1;
        anim->zelda.y += 1;
        anim->zelda.colli = 1;
        return (0);
    } else
        param->life.life = 0;
    return (1);
}

int type_colli(anim_t *anim, param_t *param, sound_t *sound, int n)
{
    if (anim->block[n].type == 1)
        return (colli_jar(anim, param, sound, n));
    else if (anim->block[n].type == 2)
        return (colli_wall(anim, param, sound, n));
    else
        return (colli_shrub(anim, param, sound, n));
}

int colli(anim_t *anim, param_t *param, sound_t *sound)
{
    int n = 0;
    sfBool test;
    sfFloatRect rec1;
    sfFloatRect rec2;
    rec1 = sfSprite_getGlobalBounds(anim->zelda.Sp);

    while (n < anim->nb_block) {
        rec2 = sfSprite_getGlobalBounds(anim->block[n].Sp);
        test = sfFloatRect_intersects(&rec1, &rec2, NULL);
        if (test == 1)
            type_colli(anim, param, sound, n);
        else
            anim->zelda.colli = 0;
        ++n;
    }
    return (0);
}
