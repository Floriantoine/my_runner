/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** type_block.c
*/

#include"../../include/all.h"

void load_jar1(block_t *block)
{
    block->type = 1;
    block->Tex = sfTexture_createFromFile("./resources/jar1.png", NULL);
}

void load_jar2(block_t *block)
{
    block->type = 1;
    block->Tex = sfTexture_createFromFile("./resources/jar2.png", NULL);
}

void load_block(block_t *block)
{
    block->type = 2;
    block->Tex = sfTexture_createFromFile("./resources/rock.png", NULL);
    block->y = block->y + 20;
}

void load_shrub(block_t *block)
{
    block->type = 3;
    block->y -= 100 * randy(0, 2, 3);
    block->Tex = sfTexture_createFromFile("./resources/shrub.png", NULL);
    block->y = block->y - 35;
}

void load_shrub_long(block_t *block)
{
    block->type = 3;
    block->y -= 100 * randy(0, 2, 3);
    block->Tex = sfTexture_createFromFile("./resources/shrub_long.png", NULL);
    block->y = block->y - 35;
}
