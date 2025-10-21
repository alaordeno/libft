/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miaviles <miaviles@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:27:03 by alaorden          #+#    #+#             */
/*   Updated: 2025/10/20 13:13:37 by miaviles         ###   ########.fr       */
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
# include <stdbool.h>

/* //state machine
typedef enum e_map_char
{
	ASCII_SPACE = ' ',
	ASCII_BACKSPACE = '\b',
	ASCII_CAR = '\r',
	ASCII_NEG = '-',
	ASCII_POS = '+',
	ASCII_9 = '9',
	ASCII_1 = '1'
}	t_map_char;
 */
/* typedef enum e_sign
{
	POS,
	NEG
}	t_sign;
 */
/* typedef struct s_map_cchar
{
	int	n;
}	t_map_cchar; */

int		ft_isalnum(char x);
int		ft_isalpha(char x);
int		ft_isascii(int x);
int		ft_isdigit(int x);
int		ft_isprint(int x);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *x);
char	ft_touper(char x);
char	ft_tolower(char y);
char	*ft_strchr(const char *x, int y);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_atoi(const char *nptr);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strtrim(char const *s1, char const *set);


#endif
