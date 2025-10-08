/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 19:56:54 by alaorden          #+#    #+#             */
/*   Updated: 2025/10/08 13:54:56 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *x)
{
	int	i;

	i = 0;
	while (x[i] != '\0')
		i++;
	return (i);
}

/*int	main(void)
{
	char	*y;

	y = "hola";
	printf("%d\n", ft_strlen(y));
	return (0);
}*/
