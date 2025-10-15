/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 12:18:10 by alaorden          #+#    #+#             */
/*   Updated: 2025/10/15 15:16:52 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	i = 0;
	if (!src || !dest)
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

/* int	main(void)
{
	char	d[20] = "hola";
	char	s[] = "adios feo";
	
	printf("NUESTRA: %p\n%s\n\n", ft_memcpy(d, s, 15), d);
	printf("ORIGINAL: %p\n%s\n\n", memcpy(d, s, 15), d);
	return (0);
}
 */