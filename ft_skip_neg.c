/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skip_neg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 18:28:45 by alaorden          #+#    #+#             */
/*   Updated: 2025/10/15 10:35:38 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_sign	ft_skip_neg(const char **nptr)
{
	t_sign	is_negative;

	is_negative = POS;		//fallback
	if ((**nptr == ASCII_NEG) || (**nptr == ASCII_POS))
	{
		if (**nptr == ASCII_NEG) 
			is_negative = NEG;
			(*nptr)++;
	}
	return (is_negative);
}

/* t_sign	ft_skip_neg(char **nptr)
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
} */