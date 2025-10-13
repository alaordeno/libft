/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:27:03 by alaorden          #+#    #+#             */
/*   Updated: 2025/10/13 18:58:23 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdint.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <ctype.h>
# include <stddef.h>
# include <stdio.h>
# include <limits.h>

//state machine
typedef enum e_map_char
{
	ASCII_SPACE = ' ',
	ASCII_BACKSPACE = '\b',
	ASCII_CAR = '\r',
	ASCII_NEG = '-',
	ASCII_POS = '+'
}	t_map_char;

typedef enum e_sign
{
	POS,
	NEG
}	t_sign;

typedef struct s_map_cchar
{
	int n;
}t_map_cchar;
int		ft_isalnum(char x);
int		ft_isalpha(char x);
int		ft_isascii(int x);
int		ft_isdigit(int x);
int		ft_ispring(int x);
size_t	ft_strlcpy(char *dest, char *src, size_t size);
int		ft_strlen(char *x);
char	ft_touper(char x);
char	ft_tolower(char y);
char	*ft_strchr(const char *x, int y);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_atoi(const char *nptr);
void	*memset(void *s, int c, size_t n);
t_sign	ft_skip_neg(char *nptr);
int		ft_isspace(int c);



#endif 