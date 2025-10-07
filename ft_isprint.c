/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 19:40:10 by alaorden          #+#    #+#             */
/*   Updated: 2025/10/07 19:55:11 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_ispring(int x)
{
	if (x >= 32 && x <= 126)
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	int	x;
	int	y;

	x = 112;
	y = ft_ispring(x);
	printf("%d", y);
	return (0);
}*/
