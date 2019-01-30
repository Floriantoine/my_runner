/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** load_map.c
*/

#include"../../include/all.h"

void map_init(anim_t *anim, int *coord, char *buffer, int i)
{
    rand_type(&anim->block[i - 1], buffer[0] - 49);
    anim->block[i - 1].x = 1940 + coord[0] * 160;
    anim->block[i - 1].y = 780 - (120 * (7 - coord[1]));
    if (anim->block[i - 1].type == 1 || anim->block[i - 1].type == 2)
        anim->block[i - 1].y += 35;
    anim->block[i - 1].mvt = 10;
    anim->block[i - 1].etat = 1;
}

int nb_obj(char *filename)
{
    int fd = open(filename, O_RDONLY);
    char buffer[2];
    int nb_obj = 0;
    read(fd, buffer, 1);

    while (buffer[0] != '1') {
        if (buffer[0] != ' ' && buffer[0] != '\n')
            ++nb_obj;
        read(fd, buffer, 1);
    }
    close(fd);
    return (nb_obj);
}

void load_map(char *filename, anim_t *anim)
{
    anim->nb_block = nb_obj(filename);
    anim->block = malloc(sizeof(block_t) * anim->nb_block);
    int fd = open(filename, O_RDONLY);
    char buffer[2];
    int coord[2] = {0, 0};
    int i = 0;

    read(fd, buffer, 1);
    while (buffer[0] != '1') {
        ++coord[0];
        if (buffer[0] == '\n') {
            coord[0] = 0;
            ++coord[1];
        } else if (buffer[0] != ' ') {
            ++i;
            map_init(anim, coord, buffer, i);
        }
        read(fd, buffer, 1);
    }
    close(fd);
}
