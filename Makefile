# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arakotom <arakotom@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/24 23:57:27 by arakotom          #+#    #+#              #
#    Updated: 2024/10/20 11:23:12 by arakotom         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror -g
RDLFLAGS = -lreadline
VGRLFLAGS = valgrind --suppressions=readline.supp --leak-check=full --track-origins=yes --show-leak-kinds=all

SRC_DIR = srcs
OBJ_DIR = objs
INCLUDE_DIR = includes
LIBFT_DIR = libft

SRCS = main.c \
		quotes.c \
		signals.c \
		env/init_env.c \
		env/free_env.c \
		msh/init_msh.c \
		msh/free_msh.c \
		heredoc/free_heredoc.c \
		input/init_input.c \
		input/input_utils.c \
		input/input_trim.c \
		prompt/free_prompt.c \
		prompt/free_prompt_struct.c


OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS:.c=.o))
LIB = $(LIBFT_DIR)/libft.a

RM = rm -rf

NAME = minishell

all : $(NAME)

$(NAME): $(OBJS) $(LIB)
	$(CC) $(CFLAGS) -I $(INCLUDE_DIR) $^ -o $@ $(RDLFLAGS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -I $(INCLUDE_DIR) -c $< -o $@

$(LIB) :
	@make -C $(LIBFT_DIR)

clean :
	@make clean -C $(LIBFT_DIR)
	$(RM) $(OBJ_DIR)

fclean : clean
	@make fclean -C $(LIBFT_DIR)
	$(RM) $(NAME)

re : fclean all

run: $(NAME)
	./$(NAME)

val:$(NAME)
	$(VGRLFLAGS) ./$(NAME)

.PHONY: all clean fclean re
