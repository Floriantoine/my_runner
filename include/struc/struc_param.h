/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** struc_param.h
*/

#ifndef STRUC_PARAM_H
#define STRUC_PARAM_H
typedef struct
{
    int x;
    int y;
} mouse_t;

typedef struct
{
    sfClock *clock;
    sfTime timer;
    sfText *text;
    sfFont *font;
}tim_t;

typedef struct
{
    int score;
    sfText *text;
    sfFont *font;
}score_t;

typedef struct
{
    int life;
    sfTexture *Tex;
    sfSprite *Sp;
    sfTexture *TexB;
    sfSprite *SpB;
}life_t;

typedef struct
{
    int level;
    float time_pass;
    int infiny;
    tim_t clock;
    tim_t loop;
    score_t score;
    mouse_t mouse;
    life_t life;
    sfFont *font;
    sfRenderWindow *window;
    sfVector2u s_window;
    sfEvent event;
    char *map_filename;
    int check_joy;
    int switch_key;
}param_t;
#endif
