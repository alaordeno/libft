/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 11:41:13 by alaorden          #+#    #+#             */
/*   Updated: 2025/10/15 13:51:06 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Generic type pointer (void *)
 * raw byte type --> unsigned char
 * 0 - 255
 * char 
 * -123 122
 */
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char*)s;
	while (n--)
		*ptr++ = (unsigned char)c;
	return (s);
}
