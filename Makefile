# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kvebers <kvebers@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 16:28:20 by kvebers           #+#    #+#              #
#    Updated: 2022/11/04 18:48:00 by kvebers          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFT = libft/libft.a
SRC = src/printf.a
SRC_BONUS = src_bonus/src.a
CC = 		gcc
CFLAG =		-Wall	 -Wextra	 -Werror
RM = 		rm -f

CFLAGS= -Wall -Werror -Wextra

all: $(NAME)

$(NAME): 
# $(OBJ)
	make -C ./libft
	make -C ./src
	cp libft/libft.a $(NAME)
	cp src/printf.a  $(NAME)
		@$(AR) -rcs $@ $^

clean:
	- @$(RM) 
# $(OBJ)
	make fclean -C ./libft
	make fclean -C ./src
#	make fclean -C ./src_bonus

fclean: clean
	- @$(RM) ${NAME}

re: fclean all

#bonus: $(BONUS_OBJS)
#	make -C ./libft
#	make -C ./src
#	make -C ./src_bonus
#	cp libft/libft.a $(NAME)
#	cp src/printf.a $(NAME)
#	cp src_bonus/src_bonus.a $(NAME)
#		@$(AR) -rc $@ $^

.PHONY: all clean fclean re #bonus