/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 17:48:10 by alaorden          #+#    #+#             */
/*   Updated: 2025/10/07 17:55:04 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(int x)
{
	if (x >= '0' && x <= '9')
		return (1);
	else
		return (0);
}

int	main(void)
{
	int		x;
	char	y;

	y = 'A';
	x = ft_isdigit(y);
	printf("%d", x);
	return (0);
}
