/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** click.c
*/

#include"../../include/all.h"
#include"../../include/main.h"

void click_start_pause(param_t *params, sound_t *sound)
{
    if (params->mouse.x >= 750 && params->mouse.x < 1194) {
        if (params->mouse.y > 507 && params->mouse.y < 640) {
            params->level == 1;
        }
    }
}

void click_home_pause(param_t *params)
{
    if (params->mouse.x >= 1194 && params->mouse.x < 1310) {
        if (params->mouse.y > 507 && params->mouse.y < 640) {
            params->level = 0;
        }
    }
}

void click_restart_pause(param_t *params, anim_t *anim)
{
    if (params->mouse.x >= 500 && params->mouse.x < 750) {
        if (params->mouse.y > 507 && params->mouse.y < 640) {
            params->level = 1;
            params->life.life = 3;
            params->score.score = 0;
            if (params->infiny == 0)
                load_map(params->map_filename, anim);
        }
    }
}

void click_main_pause(param_t *params, sound_t *sound, anim_t *anim)
{
    click_start_pause(params, sound);
    click_home_pause(params);
    click_restart_pause(params, anim);
}
