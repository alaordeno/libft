/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:53:36 by alaorden          #+#    #+#             */
/*   Updated: 2025/10/13 18:50:17 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "libft.h"


int		ft_isspace(int c)
{
	return (c == ASCII_SPACE || c >= ASCII_BACKSPACE && c <= ASCII_CAR);
}

/**
 * QUESTION:
 * 
 * The diffference betwee position and direction and chose according 
 * necessity. Definition are differents. So use your brain by ODIN
 */
void	ft_skip_space(char *ptr)
{
	while (ft_isspace(*ptr++))
		;
}


/**
 *  input : ############   hjfskjhfksadjskjfhj############ 
 * output: hjfskjhfksadjskjfhj
 */
void	ft_trim()
{
	/**
	 * TODO:
	 */
}
              hjfskjhfksadjskjfhj           