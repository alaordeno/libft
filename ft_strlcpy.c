/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 11:47:41 by alaorden          #+#    #+#             */
/*   Updated: 2025/10/08 16:43:12 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	temp;

	temp = 0;
	while (*src != '\0' && size--)
	{
		*dest = *src;
		src++;
		dest++;
		temp++;
	}
	return (temp);
}

/*int	main(void)
{
	char			dest[45];
	unsigned int	temp;

	temp = ft_strlcpy(dest, "Puta función", ft_strlen("Puta función"));
	printf("temp: %u   dest: %s\n", temp, dest);
}*/
