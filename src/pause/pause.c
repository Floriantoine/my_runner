/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** pause.c
*/

#include"../../include/all.h"

void pause_main(param_t *param, decor_t *decor, sound_t *sound, anim_t *anim)
{
    sfVector2f scale = {3, 3};
    sfVector2f pos = {350, 90};
    sfTexture *Tex = sfTexture_createFromFile("resources/pause.png", NULL);
    sfSprite *Sp = sfSprite_create();

    sfRenderWindow_setMouseCursorVisible(param->window, sfTrue);
    sfSprite_setTexture(Sp, Tex, sfTrue);
    sfSprite_setPosition(Sp, pos);
    sfSprite_setScale(Sp, scale);
    sfRenderWindow_drawSprite(param->window, Sp, NULL);
    sfRenderWindow_display(param->window);
    while (param->level == 42) {
        while (sfRenderWindow_pollEvent(param->window, &(param->event)))
            evt_pause(param, sound, anim);
    }
    sfRenderWindow_setMouseCursorVisible(param->window, sfFalse);
}
