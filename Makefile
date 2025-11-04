# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/13 18:51:56 by alaorden          #+#    #+#              #
#    Updated: 2025/11/04 15:13:58 by alaorden         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# CC
CC = cc
CFLAGS = -Wall -Wextra -Werror -Wshadow
NAME		= libft.a	# lib  name
SRCS		= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c\
ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcpy.c ft_memmove.c ft_memset.c\
OBJS		= $(SRCS:.c=.o)
RM 			= rm -rf
AR			= ar rcs
PROG		?= main
# TARGET 
all: $(NAME)

$(NAME) : $(OBJS)
	$(AR) $@ $<

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

#$(PROG):
#	$(CC) $(NAME) main.c

fclean:
	$(RM) $(NAME)

re: fclean all

.PHONY: all fclean clean re
