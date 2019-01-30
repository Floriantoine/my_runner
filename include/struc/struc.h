/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** struc.h
*/

#ifndef STRUC_H
#define STRUC_H
typedef struct
{
    sfMusic *win;
    sfMusic *end;
    sfMusic *dash;
    sfMusic *jump1;
    sfMusic *jump2;
    sfMusic *hit_s;
    sfMusic *sword_out;
    sfMusic *sword_hit;
    sfMusic *sword_in;
    sfMusic *main_cur;
    sfMusic *main_select;
    sfMusic *jar_breack;
    sfMusic *wild;
    sfMusic *frog;
    sfMusic *main_theme;
}sound_t;

typedef struct
{
    int sp_pos;
    int sp_size;
}tab_sp_t;

typedef struct
{
    sfTexture *Tex;
    sfSprite *Sp;
    sfVector2f scale;
    tab_sp_t *tab_sp;
    int sp_pos;
    int loop;
    int sp_size;
    int life;
    int touch;
    int sp_max;
    float mvt;
    int U_D;
    int y;
    int x;
    int colli;
    int jump_y;
}zelda_t;

typedef struct
{
    sfTexture *Tex;
    sfSprite *Sp;
    int mvt;
    int x;
    int y;
    int etat;
    int type;
}block_t;

typedef struct
{
    sfTexture *Tex;
    sfSprite *Sp;
    int mvt;
    int x;
    int y;
    int sp_pos;
    int etat;
    int type;
}skel_t;

typedef struct
{
    sfTexture *Tex;
    sfSprite *Sp;
    sfTexture *Tex_texte;
    sfSprite *Sp_texte;
    sfTexture *Tex_bar;
    sfSprite *Sp_bar;
    sfTexture *Tex_enter;
    sfSprite *Sp_enter;
}loading_t;

typedef struct
{
    sfTexture *Tex;
    sfSprite *Sp;
    int sp_pos;
    int loop;
    int etat;
} dash_t;

typedef struct
{
    sfTexture *Tex;
    sfSprite *Sp;
    int loop;
} ruby_t;

typedef struct
{
    ruby_t ruby;
    dash_t dash;
    block_t *block;
    zelda_t zelda;
    loading_t load;
    skel_t skel;
    int nb_block;
    int nb_skel;
}anim_t;
#endif
