/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 16:45:43 by alaorden          #+#    #+#             */
/*   Updated: 2025/10/08 16:56:00 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strchr(char *x, char y)
{
	int	i;

	i = 0;
	while (x[i] != '\0')
	{
		if (x[i] == y)
			return(i);
		else 
			i++;
	}
	return (0);
}

int	main(void)
{
	
}
/*no esta acabdo*/