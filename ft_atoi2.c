/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:44:03 by alaorden          #+#    #+#             */
/*   Updated: 2025/10/15 11:28:18 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//controlar carcter del 9 al 13 y espacios, controlar + y -, controlar maximos y minimos, conversion char a int

int	ft_atoi(const char *nptr)
{
	int	r;
	int	s;
	int	i;
	int	d;
	
	i = 0;
	s = 1;
	r = 0;
	while ((nptr[i] == 32) || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if(nptr[i] == '+' || nptr[i] == '-')
	{
		if(nptr[i] == '-')
			s = s * -1;
		i++;	
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		d = nptr[i] - '0';
		if(s == 1 && r >(INT_MAX - d) / 10)
			return (-1);
		if (s == -1 && r <((long)INT_MAX + 1 - d) / 10)
			return (0);
		r = r * 10 + d;
		i++;
	}
	return (r * s);
}

int	main(void)
{
	char	n[] = "  56";
	int		x = ft_atoi(n);

	printf("%d\n", x);
	return (0);
}
