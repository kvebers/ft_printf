# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kvebers <kvebers@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 16:28:28 by kvebers           #+#    #+#              #
#    Updated: 2022/11/04 16:47:23 by kvebers          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =		ft_printf.c
CC = 		cc
CFLAG =		-Wall	 -Wextra	 -Werror
RM = 		rm -f
NAME = 		printf.a
OBJ	= $(SRC:.c=.o)

$(NAME): $(OBJ)
	@$(AR) -rcs $@ $^

%.o : %.c
	@$(CC) -c $(CFLAG) $< -o $@

clean:
	- @$(RM) $(OBJ) 

fclean: clean
	- @$(RM) ${NAME}

re: fclean all

all: $(NAME)

.PHONY: all clean fclean re
