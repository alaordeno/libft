/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 12:18:10 by alaorden          #+#    #+#             */
/*   Updated: 2025/10/15 12:57:40 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i; //como un int pero mayor y simpre positivo//
	unsigned char	*d;
	const unsigned char	*s;
	
	i = 0;
	if (!src && !dest) //si no existe src, es igual a src == '\0'
		return (NULL);

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

int	main(void)
{
	char	d[] = "hola";
	char	s[] = "adios";
	
	printf("%p\n%s\n", ft_memcpy(d, s, 6), d);
	return (0);
}
