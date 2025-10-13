/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:27:03 by alaorden          #+#    #+#             */
/*   Updated: 2025/10/13 16:36:31 by alaorden         ###   ########.fr       */
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

#endif 