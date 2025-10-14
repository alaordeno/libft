/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:08:41 by alaorden          #+#    #+#             */
/*   Updated: 2025/10/14 18:26:32 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isdigit(int x)
{
	return (x >= ASCII_1 && x <= ASCII_9);
}

static int		ft_isspace(int c)
{
	return (c == ASCII_SPACE || (c >= ASCII_BACKSPACE && c <= ASCII_CAR));
}

static void	ft_skip_space(char **ptr)
{
	while (ft_isspace(**ptr))
		(*ptr)++;
}

t_sign	ft_skip_neg(char **nptr)
{
	t_sign	is_negative;

	is_negative = POS;		//fallback
	if ((**nptr == ASCII_NEG) || (**nptr == ASCII_POS))
	{
		if (**nptr == ASCII_NEG) // TODO:verify if we can increment earlier
			is_negative = NEG;
		(*nptr)++;
	}
	return (is_negative);
}

int	ft_atoi(char *nptr)
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

short
int	main(void)
 {
	char	*x = "+4k2";
	int	i = ft_atoi(x);

	printf("%d\n", i);
	return (0);
 }
 