/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 16:36:24 by alaorden          #+#    #+#             */
/*   Updated: 2025/10/10 15:15:53 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	c;
	unsigned int	j;

	c = 0;
	j = 0;
	while (dst[c] != '\0')
		c++;
	while (src[j] != '\0' && c < (size - 1))
	{
		dst[c] = src[j];
		c++;
		j++;
	}
	dst[c] = '\0';
	return (c);
}

/*  int main(void)
 {
	char	dst[] = "puta";
	const char src[] = " funcion";
	
	ft_strlcat(dst, src, 15);
	printf("%s\n", dst);
	return (0);
 }
  */