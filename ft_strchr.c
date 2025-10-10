/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 16:45:43 by alaorden          #+#    #+#             */
/*   Updated: 2025/10/10 13:16:37 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *x, char y)
{
	int	i;

	i = 0;
	while (x[i] != '\0')
	{
		if (x[i] == y)
			return ((char *)&x[i]);
		else
			i++;
	}
	return (NULL);
}
/* 
int	main(void)
{
	char 	y;
	char	x[] = "hola mundo";
	
	y = 'z';
	printf("%s", ft_strchr(x, y));
	return (0);
}
 */
//pasar norm