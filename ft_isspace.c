/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:53:36 by alaorden          #+#    #+#             */
/*   Updated: 2025/10/14 18:07:13 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(int c)
{
	return (c == ASCII_SPACE || (c >= ASCII_BACKSPACE && c <= ASCII_CAR));
}

void	ft_skip_space(char *ptr)
{
	while (ft_isspace(*ptr++))
		;
}

/**
 *  input : ############   hjfskjhfksadjskjfhj############ 
 * output: hjfskjhfksadjskjfhj
 */
/* void	ft_trim()
{

	  TODO:
	 
}
   */