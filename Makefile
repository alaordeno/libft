# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/13 18:51:56 by alaorden          #+#    #+#              #
#    Updated: 2025/10/13 19:20:26 by alaorden         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# CC
CC = cc
CFLAGS = -Wall -Wextra -Werror -Wshadow
NAME		= libft.a	# lib  name
SRCS		= ft_isalpha.c
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

$(PROG):
	$(CC) $(NAME) main.c

fclean:
	$(RM) $(NAME)

re: fclean all

.PHONY: all fclean clean re

# timestamp : 00h00M000S


# make || make all