/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** decor.c
*/

#include"../../include/all.h"

void verif_decor(tree_t *tree)
{
    tree->y2 = tree->y2 - tree->mvt;
    tree->y = tree->y - tree->mvt;
    if (tree->y <= -tree->tall)
        tree->y = tree->tall;
    if (tree->y2 <= -tree->tall)
        tree->y2 = tree->tall;
}
