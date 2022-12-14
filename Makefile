# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kvebers <kvebers@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/05 14:56:20 by kvebers           #+#    #+#              #
#    Updated: 2022/11/10 16:10:43 by kvebers          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	src/ft_printf.c src/ft_putstr.c src/ft_putchar.c src/ft_putdeca.c \
		src/ft_puthex.c src/ft_putunsigned.c src/ft_putptr.c

CC = 		cc
CFLAG =		-Wall	 -Wextra	 -Werror
RM = 		rm -f
NAME = 		libftprintf.a
OBJ	= $(SRC:.c=.o)

$(NAME): $(OBJ)
	make -C ./libft
	cp libft/libft.a $(NAME)
		@$(AR) -rcs $@ $^

%.o : %.c
	@$(CC) -c $(CFLAG) $< -o $@

all: $(NAME)

clean:
	make clean -C ./libft
	- @$(RM) $(OBJ)

fclean: clean
	make fclean -C ./libft
	- @$(RM) ${NAME}

re: fclean all

.PHONY: all clean fclean re 