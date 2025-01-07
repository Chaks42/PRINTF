# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vpoelman <vpoelman@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/07 12:36:26 by vpoelman          #+#    #+#              #
#    Updated: 2025/01/07 12:36:29 by vpoelman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c ft_putchar.c ft_puthex.c ft_putnbr.c ft_putpointer.c \
       ft_putstr.c ft_putunsigned.c ft_puthex_long.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re