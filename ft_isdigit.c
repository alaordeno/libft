/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 17:48:10 by alaorden          #+#    #+#             */
/*   Updated: 2025/10/14 18:02:20 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int x)
{
	return (x >= ASCII_1 && x <= ASCII_9);
}

// int	main(void)
// {
// 	int		x;
// 	char	y;

// 	char *ptr = "12334abc56878";
// 	while (*ptr)
// 	{
// 		printf("%d\n", ft_isdigit(*ptr));
// 		ptr++;
// 	}
// 	return (0);
// }
