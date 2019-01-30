/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** menu.c
*/

#include"../../include/menu.h"

void menuback(decor_t *decor, param_t *param)
{
    sfRenderWindow_drawSprite(param->window, decor->menu.Sp, NULL);
    play_menu(param, decor);
    escape_menu(param, decor);
    about_menu(param, decor);
    setting_menu(param, decor);
    title(decor, param);
}

void evt_menu(param_t *param, sound_t *sound)
{

    while (sfRenderWindow_pollEvent(param->window, &param->event)) {
        if (param->event.type == sfEvtClosed) {
            param->level = -1;
        } else if (param->event.type == sfEvtKeyPressed) {
            sfMusic_play(sound->main_cur);
            key_menu(param);
        } else {
            if (param->event.type ==  sfEvtMouseMoved) {
                param->mouse.x = param->event.mouseMove.x;
                param->mouse.y = param->event.mouseMove.y;
            } else if (param->event.type == sfEvtMouseButtonReleased
            || sfJoystick_isButtonPressed(0, 6)
            || sfJoystick_isButtonPressed(0, 7)) {
                sfMusic_play(sound->main_cur);
                click_menu(param);
            }
        }
    }
}

void menu(param_t *param, anim_t *anim, decor_t *decor, sound_t *sound)
{
    sfRenderWindow_setMouseCursorVisible(param->window, sfTrue);
    while (param->level == 0) {
        evt_menu(param, sound);
        menuback(decor, param);
        sound_menu(sound);
        sfRenderWindow_display(param->window);
    }
    sfMusic_play(sound->main_select);
    sfRenderWindow_setMouseCursorVisible(param->window, sfFalse);
}
