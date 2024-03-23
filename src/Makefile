# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aeddaoud <aeddaoud@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/03 12:29:18 by aeddaoud          #+#    #+#              #
#    Updated: 2022/05/16 15:57:43 by aeddaoud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				=	cc
RM				=	rm -rf
FLAGS			=	-Wall -Werror -Wextra
LIBFT			=	$(addprefix libs/libft/, ft_atoi.c ft_calloc.c ft_itoa.c ft_memset.c ft_split.c ft_strcmp.c ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strnstr.c ft_strrchr.c)
GET_NEXT_LINE	=	$(addprefix libs/get_next_line/, get_next_line.c get_next_line_utils.c)
FT_PRINTF		=	$(addprefix libs/ft_printf/, ft_printf.c ft_utils.c)


# -------- Mandatory -------- #
TARGET		=	so_long
INC_DIR		=	-I mandatory/include -I libs/libft/include -I libs/get_next_line/include -I libs/ft_printf/include
CORE		=	core.c
RENDERING	=	renderer.c
PARSING		=	parser.c
CHECKING	=	checker.c map_checker_utils.c mlx_check.c
UTILS		=	check_file.c cleanup.c free_splits.c printerr.c read_file.c usage.c
HOOKS		=	check_move.c collecte.c game_over.c hooks_handler.c move_down.c move_left.c move_right.c move_up.c
SRC			=	mandatory/src/main.c \
				$(GET_NEXT_LINE) \
				$(FT_PRINTF) \
				$(LIBFT) \
				$(addprefix mandatory/src/core/, $(CORE)) \
				$(addprefix mandatory/src/hooks/, $(HOOKS)) \
				$(addprefix mandatory/src/utils/, $(UTILS)) \
				$(addprefix mandatory/src/checking/, $(CHECKING)) \
				$(addprefix mandatory/src/rendering/, $(RENDERING)) \
				$(addprefix mandatory/src/parsing/, $(PARSING))
OBJS		=	$(SRC:%.c=%.o)

# -------- Bonus -------- #
TARGET_BONUS	=	so_long_bonus
INC_DIR_BONUS	=	-I bonus/include -I libs/libft/include -I libs/get_next_line/include -I libs/ft_printf/include
CORE_BONUS		=	config.c core.c load_assets.c	
RENDERING_BONUS	=	render_coll.c render_enemy.c render_exit.c render_ground.c render_player.c render_wall.c renderer_map.c
PARSING_BONUS	=	parser.c
CHECKING_BONUS	=	check_file.c checker.c map_checker_utils.c mlx_check.c
UTILS_BONUS		=	cleanup.c free_splits.c printerr.c read_file.c usage.c
HOOKS_BONUS		=	check_move.c collecte.c game_over.c hooks_handler.c move_down.c move_left.c move_right.c move_up.c
ANIMATION_BONUS	=	animate_enemy.c animation.c enemy_movment.c
SRC_BONUS		=	bonus/src/main.c \
					$(GET_NEXT_LINE) \
					$(FT_PRINTF) \
					$(LIBFT) \
					$(addprefix bonus/src/core/, $(CORE_BONUS)) \
					$(addprefix bonus/src/hooks/, $(HOOKS_BONUS)) \
					$(addprefix bonus/src/checking/, $(CHECKING_BONUS)) \
					$(addprefix bonus/src/rendring/, $(RENDERING_BONUS)) \
					$(addprefix bonus/src/animation/, $(ANIMATION_BONUS)) \
					$(addprefix bonus/src/parsing/, $(PARSING_BONUS)) \
					$(addprefix bonus/src/utils/, $(UTILS_BONUS)) 
					
OBJS_BONUS		=	$(SRC_BONUS:%.c=%.o)

all: $(TARGET)

bonus: $(TARGET_BONUS)

$(TARGET): $(OBJS)
	$(CC) $(FLAGS) $(INC_DIR) $(OBJS) -lmlx -framework OpenGL -framework AppKit -o $(TARGET)

$(TARGET_BONUS): $(OBJS_BONUS)
	$(CC) $(FLAGS) $(OBJS_BONUS) -lmlx -framework OpenGL -framework AppKit -o $(TARGET_BONUS)

clean:
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
	$(RM) $(TARGET) $(TARGET_BONUS)

re: fclean $(TARGET)

rebonus: fclean $(TARGET_BONUS)

libs/get_next_line/%.o:libs/get_next_line/%.c
	$(CC) $(FLAGS) -D BUFFER_SIZE=10 -c -I libs/get_next_line/include $< -o $@

libs/libft/%.o:libs/libft/%.c
	$(CC) $(FLAGS) -c -I libs/libft/include $< -o $@

libs/ft_printf/%.o:libs/ft_printf/%.c
	$(CC) $(FLAGS) -c -I libs/ft_printf/include $< -o $@

mandatory/%.o:mandatory/%.c
	$(CC) $(FLAGS) $(INC_DIR) -c $< -o $@

bonus/%.o:bonus/%.c
	$(CC) $(FLAGS) $(INC_DIR_BONUS) -c $< -o $@
