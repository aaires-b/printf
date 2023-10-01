# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaires-b <aaires-b@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/08 18:23:27 by aaires-b          #+#    #+#              #
#    Updated: 2023/09/09 00:14:12 by aaires-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

CFILES	= 	sources/ft_printf.c sources/ft_format.c sources/ft_putchar.c \
			sources/ft_putnbr.c sources/ft_putnbrbase.c \
			sources/ft_putnbrunsigned.c sources/ft_putptr.c \
			sources/ft_putstr.c
					
OFILES	= $(CFILES:.c=.o)

CC		= cc
CFLAGS	= -Wall -Wextra -Werror

all: $(NAME)

${NAME} : ${OFILES}	

	ar rcs $(NAME) $(OFILES)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re

	

