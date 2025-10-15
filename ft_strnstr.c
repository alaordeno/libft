/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:06:01 by alaorden          #+#    #+#             */
/*   Updated: 2025/10/13 14:07:32 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	x;

	if (len == 0)
		return (0);
	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		x = 0;
		while (big[i + x] == little[x] && little[x] != '\0' && i < len - 1)
			x++;
		if (little[x] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

/* int	main(void)
{
	char	big[] = "hola que tal mundo";
	char	little[] = "al";

	char	*x = ft_strnstr(big, little, 14);
	printf("%s\n", x);
	return (0);
}
 */