/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:08:41 by alaorden          #+#    #+#             */
/*   Updated: 2025/10/15 10:42:39 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		res;
	t_sign	is_negative;
	int		digit;

	res = 0;
	ft_skip_space(&nptr);
	is_negative = ft_skip_neg(&nptr);
	while (ft_isdigit(*nptr))
	{
		digit = (*nptr++ - '0');
		res = res * 10 + digit;
	}
	if (is_negative)
		return (-res);
	return (res);
}

int	main(void)
 {
	char	*x = "+4k2";
	int	i = ft_atoi(x);

	printf("%d\n", i);
	return (0);
 }
