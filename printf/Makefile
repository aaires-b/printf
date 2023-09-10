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

CFILES	= 	ft_printf.c ft_format.c ft_putchar.c ft_putnbr.c ft_putnbrbase.c \
			ft_putnbrunsigned.c ft_putptr.c ft_putstr.c 
					
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

	

