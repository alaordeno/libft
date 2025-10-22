/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 15:45:17 by alaorden          #+#    #+#             */
/*   Updated: 2025/10/17 16:09:15 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_toupper(char x)
{
	if (x >= 'a' && x <= 'z')
		x = x - 32;
	return (x);
}

/*int	main(void)
{
	char	x;

	x = 'k';
	printf("%c\n", ft_toupper(x));
	return (0);
}*/
