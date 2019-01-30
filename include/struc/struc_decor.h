/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** struc.h
*/

#ifndef STRUC_DECOR_H
#define STRUC_DECOR_H
typedef struct
{
    sfTexture *Tex;
    sfSprite *Sp;
}back_t;

typedef struct
{
    sfTexture *Tex;
    sfSprite *Sp;
    int y;
    int y2;
    int mvt;
    int tall;
}tree_t;

typedef struct
{
    sfTexture *Tex;
    sfSprite *Sp;
    sfTexture *Tex_play;
    sfSprite *Sp_play;
    sfTexture *Tex_set;
    sfSprite *Sp_set;
    sfTexture *Tex_esc;
    sfSprite *Sp_esc;
    sfTexture *Tex_abt;
    sfSprite *Sp_abt;
    sfText *text;
    sfFont *font;
    int y_text;
    int loop;
    int mvt;
}menu_t;

typedef struct
{
    sfTexture *Tex;
    sfSprite *Sp;
    sfTexture *Tex_gm;
    sfSprite *Sp_gm;
    sfTexture *Tex_set;
    sfSprite *Sp_set;
    sfTexture *Tex_esc;
    sfSprite *Sp_esc;
    sfText *text;
    sfFont *font;
    int y_text;
    int loop;
    int mvt;
}end_t;

typedef struct
{
    sfTexture *Tex;
    sfSprite *Sp;
    sfTexture *Tex_sc;
    sfSprite *Sp_sc;
    sfTexture *Tex_header;
    sfSprite *Sp_header;
    sfTexture *Tex_esc;
    sfSprite *Sp_esc;
    sfText *text;
    sfFont *font;
    int y_text;
    int loop;
    int mvt;
}win_t;

typedef struct
{
    back_t back;
    tree_t tree_f;
    tree_t tree_b;
    tree_t grass;
    menu_t menu;
    end_t end;
    win_t win;
}decor_t;
#endif
