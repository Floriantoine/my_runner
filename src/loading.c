/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** loading.c
*/

#include "../include/all.h"
#include "../include/menu.h"
#include "../include/main.h"
#include"../include/end.h"

void loadback(param_t *param, anim_t *anim)
{
    float bar = 0;
    sfVector2f scale = {0.1, 1};
    while (scale.x < 0.5
    && param->event.type != sfEvtKeyPressed) {
        sfRenderWindow_drawSprite(param->window, anim->load.Sp, NULL);
        sfRenderWindow_drawSprite(param->window, anim->load.Sp_texte, NULL);
        sfRenderWindow_pollEvent(param->window, &param->event);
        sfSprite_setScale(anim->load.Sp_bar, scale);
        scale.x += 0.0027;
        if (scale.x > 0.254 && scale.x < 0.259 && param->infiny == 0)
            load_map(param->map_filename, anim);
        sfRenderWindow_drawSprite(param->window, anim->load.Sp_bar, NULL);
        sfRenderWindow_display(param->window);
    }
    if (scale.x < 0.259)
            load_map(param->map_filename, anim);
}

void loading(param_t *param, anim_t *anim, decor_t *decor, sound_t *sound)
{
    int skipe = 0;

    if (param->infiny == 0)
        loadback(param, anim);
    sfRenderWindow_drawSprite(param->window, anim->load.Sp_enter, NULL);
    sfRenderWindow_display(param->window);
    while (skipe == 0 ) {
        sfRenderWindow_pollEvent(param->window, &param->event);
        if ((param->event.type == sfEvtKeyPressed
        && param->event.key.code == sfKeyReturn)
        || sfJoystick_isButtonPressed(0, 7))
            skipe = 1;
    }
    sfMusic_play(sound->main_select);
    sfRenderWindow_setMouseCursorVisible(param->window, sfFalse);
}
