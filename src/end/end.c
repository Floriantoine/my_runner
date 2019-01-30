/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** end.c
*/

#include"../../include/all.h"
#include"../../include/end.h"

void endback(decor_t *decor, param_t *param, anim_t *anim)
{
    sfRenderWindow_drawSprite(param->window, decor->end.Sp, NULL);
    gm_end(param, decor);
    stars_win(param, decor, anim);
    escape_end(param, decor);
    setting_end(param, decor);
}

void evt_end(param_t *param, sound_t *sound, anim_t *anim)
{
    while (sfRenderWindow_pollEvent(param->window, &param->event)) {
        if (param->event.type == sfEvtClosed) {
            param->level = -1;
        } else if (param->event.type == sfEvtKeyPressed
        || param->event.type == sfEvtJoystickButtonPressed) {
            sfMusic_play(sound->main_cur);
            key_end(param, anim);
        } else {
            if (param->event.type ==  sfEvtMouseMoved) {
                param->mouse.x = param->event.mouseMove.x;
                param->mouse.y = param->event.mouseMove.y;
            } else if (param->event.type == sfEvtMouseButtonReleased) {
                sfMusic_play(sound->main_cur);
                click_end(param);
            }
        }
    }
}

void sound_end(sound_t *sound)
{
    sfMusic_pause(sound->main_theme);
    sfMusic_pause(sound->frog);
    if (sfMusic_getStatus(sound->end) == sfFalse)
        sfMusic_play(sound->end);
}

void end
(param_t *param, anim_t *anim, decor_t *decor, sound_t *sound)
{
    sfRenderWindow_setMouseCursorVisible(param->window, sfTrue);
    while (param->level == 88) {
        evt_end(param, sound, anim);
        sfRenderWindow_clear(param->window, sfBlack);
        endback(decor, param, anim);
        sound_end(sound);
        sfRenderWindow_display(param->window);
    }
    sfMusic_play(sound->main_select);
    sfRenderWindow_setMouseCursorVisible(param->window, sfFalse);
}
