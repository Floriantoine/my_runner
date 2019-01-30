##
## EPITECH PROJECT, 2018
## delivery
## File description:
## Makefile
##

SRC    =    src/level.c                                       \
            src/level_infin.c                                 \
            src/anim.c                                        \
            src/skel/skel.c                                   \
            src/anim_decor.c                                  \
            src/body.c                                        \
            src/map/load_map.c                                \
            src/main.c                                        \
            src/colli.c                                       \
            src/put_rule.c                                    \
            src/my_putstr.c                                   \
            src/value_zelda.c                                 \
            src/evt/evt_key.c                                 \
            src/evt/evt_level.c                               \
            src/evt/evt_joy.c                                 \
            src/hud/timing.c                                  \
            src/hud/score.c                                   \
            src/hud/sound.c                                   \
            src/hud/life.c                                    \
            src/init/init_block.c                             \
            src/init/init_decor.c                             \
            src/init/init_param.c                             \
            src/init/init_menu.c                              \
            src/init/init_type_block.c                        \
            src/init/init_sound.c                             \
            src/init/init_anim.c                              \
            src/init/init_level.c                             \
            src/menu/menu.c                                   \
            src/menu/title.c                                  \
            src/menu/key_menu.c                               \
            src/menu/print_menu.c                             \
            src/menu/click_menu.c                             \
            src/verif/verif_block.c                           \
            src/verif/verif_link.c                            \
            src/verif/verif_decor.c                           \
            src/end/end.c                                     \
            src/end/key_end.c                                 \
            src/end/print_end.c                               \
            src/end/click_end.c                               \
            src/win/win.c                                     \
            src/win/key_win.c                                 \
            src/win/print_win.c                               \
            src/win/click_win.c                               \
            src/pause/click_pause.c                               \
            src/pause/evt_pause.c                               \
            src/pause/pause.c                               \
            src/loading.c                                     \
            src/randy.c

OBJ     =   $(SRC:.c=.o)

NAME    =   my_runner

$(NAME):$(OBJ)
	gcc -o $(NAME) $(OBJ) -lcsfml-window -lcsfml-system -lcsfml-graphics -lcsfml-audio

all:$(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean	all

.PHONY:	all	clean fclean	re
