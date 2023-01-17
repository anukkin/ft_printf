# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abasterr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/20 14:13:01 by abasterr          #+#    #+#              #
#    Updated: 2023/01/17 19:52:04 by abasterr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf

SRC = ft_printf.c\
			Libft/ft_putchar.c\
			Libft/ft_putstr.c\
			Libft/ft_putnbr_base.c\
			Libft/ft_strlen.c\
			Libft/ft_unputnbr_base.c\
			Libft/ft_ptr_hex.c\


		

OBJS = $(SRC:.c=.o)

$(NAME): $(OBJS)
	ar crs $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: all re clean fclean