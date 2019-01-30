/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** main.c
*/

#include"../include/all.h"
#include"../include/main.h"
#include"../include/init_all.h"

void tab_sp_two(tab_sp_t **tab_sp)
{
    (*tab_sp)[9].sp_pos = 280;
    (*tab_sp)[9].sp_size = 35;
    (*tab_sp)[10].sp_pos = 315;
    (*tab_sp)[10].sp_size = 35;
    (*tab_sp)[11].sp_pos = 350;
    (*tab_sp)[11].sp_size = 40;
    (*tab_sp)[12].sp_pos = 390;
    (*tab_sp)[12].sp_size = 78;
    (*tab_sp)[13].sp_pos = 468;
    (*tab_sp)[13].sp_size = 105;
    (*tab_sp)[14].sp_pos = 573;
    (*tab_sp)[14].sp_size = 58;
    (*tab_sp)[15].sp_pos = 631;
    (*tab_sp)[15].sp_size = 90;
    (*tab_sp)[16].sp_pos = 721;
    (*tab_sp)[16].sp_size = 65;
}

void tab_sp(tab_sp_t **tab_sp)
{
    (*tab_sp) = malloc(sizeof(tab_sp_t) * 16);
    (*tab_sp)[0].sp_pos = 0;
    (*tab_sp)[0].sp_size = 38;
    (*tab_sp)[1].sp_pos = 38;
    (*tab_sp)[1].sp_size = 27;
    (*tab_sp)[2].sp_pos = 65;
    (*tab_sp)[2].sp_size = 27;
    (*tab_sp)[3].sp_pos = 92;
    (*tab_sp)[3].sp_size = 35;
    (*tab_sp)[4].sp_pos = 127;
    (*tab_sp)[4].sp_size = 31;
    (*tab_sp)[5].sp_pos = 158;
    (*tab_sp)[5].sp_size = 28;
    (*tab_sp)[6].sp_pos = 186;
    (*tab_sp)[6].sp_size = 28;
    (*tab_sp)[7].sp_pos = 214;
    (*tab_sp)[7].sp_size = 30;
    (*tab_sp)[8].sp_pos = 244;
    (*tab_sp)[8].sp_size = 36;
    tab_sp_two(tab_sp);
}

void init_all(decor_t *decor, anim_t *anim, sound_t *sound, param_t *param)
{
    init_anim(decor, anim);
    init_sound(sound);
    init_param(param);
    init_decor(decor);
}

int error_base(int argc, char **argv)
{
    if (argc != 2) {
        my_putstr("./my_runner: bad arguments: 0 given but 1 is required\n", 2);
        my_putstr("retry with -h\n", 2);
        return (84);
    }
    if (argv[1][0] != '-') {
        if (open(argv[1], O_RDONLY) == -1) {
            my_putstr("no File\n", 2);
            return (84);
        }
    }
    return (0);
}

int main(int argc, char *argv[])
{
    if (error_base(argc, argv) == 84)
        return (84);
    if (argv[1][0] == '-' && argv[1][1] == 'h' && put_rule() == 0)
        return (0);
    param_t param;
    decor_t decor;
    sound_t sound;
    anim_t anim;
    init_all(&decor, &anim, &sound, &param);
    if (argv[1][0] == '-' && argv[1][1] == 'i')
        param.infiny = 1;
    else {
        param.infiny = 0;
        param.map_filename = argv[1];
    }
    body(&param, &anim, &sound, &decor);
    return (0);
}
