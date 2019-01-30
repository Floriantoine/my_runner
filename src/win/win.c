/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** win.c
*/

#include"../../include/all.h"
#include"../../include/win.h"

void winback(decor_t *decor, param_t *param, anim_t *anim)
{
    sfRenderWindow_drawSprite(param->window, decor->win.Sp, NULL);
    header_win(param, decor);
    stars_win(param, decor, anim);
    escape_win(param, decor);
}

void evt_win(param_t *param, sound_t *sound)
{

    while (sfRenderWindow_pollEvent(param->window, &param->event)) {
        if (param->event.type == sfEvtClosed) {
            param->level = -1;
        } else if (param->event.type == sfEvtKeyPressed) {
            sfMusic_play(sound->main_cur);
            key_win(param);
        } else {
            if (param->event.type ==  sfEvtMouseMoved) {
                param->mouse.x = param->event.mouseMove.x;
                param->mouse.y = param->event.mouseMove.y;
            } else if (param->event.type == sfEvtMouseButtonReleased) {
                sfMusic_play(sound->main_cur);
                click_win(param);
            }
        }
    }
}

void sound_win(sound_t *sound)
{
    sfMusic_pause(sound->main_theme);
    sfMusic_pause(sound->frog);
    if (sfMusic_getStatus(sound->win) == sfFalse)
        sfMusic_play(sound->win);
}

void win(param_t *param, anim_t *anim, decor_t *decor, sound_t *sound)
{
    sfRenderWindow_setMouseCursorVisible(param->window, sfTrue);
    while (param->level == 99) {
        evt_win(param, sound);
        sfRenderWindow_clear(param->window, sfBlack);
        winback(decor, param, anim);
        sound_win(sound);
        sfRenderWindow_display(param->window);
    }
    sfMusic_play(sound->main_select);
    sfRenderWindow_setMouseCursorVisible(param->window, sfFalse);
}
