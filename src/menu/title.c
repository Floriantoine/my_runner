/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** title.c
*/

#include"../../include/menu.h"

void title(decor_t *decor, param_t *param)
{
    char title[] = "\tRUN WITH THE\n  Breath of the Wild ";
    sfText_setString(decor->menu.text, title);
    decor->menu.loop++;
    if (decor->menu.y_text > 100)
        decor->menu.mvt = -2;
    if (decor->menu.y_text < 5)
        decor->menu.mvt = 2;
    decor->menu.y_text += decor->menu.mvt;
    sfVector2f pos99 = {600, decor->menu.y_text};
    sfText_setPosition(decor->menu.text, pos99);
    sfRenderWindow_drawText(param->window, decor->menu.text, NULL);
}
