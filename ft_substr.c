/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:17:35 by miaviles          #+#    #+#             */
/*   Updated: 2025/10/22 10:07:23 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	l;
	char	*r;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		len = 0;
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	r = (char *)malloc(sizeof(char) * len + 1);
	l = 0;
	if (!r)
		return (NULL);
	while (l < len)
	{
		r[l] = s[start + l];
		l++;
	}
	r[l] = '\0';
	return (r);
}
/*int	main(void)
{
	char const	s[] = "hola mundo";
	unsigned int	start = 5;
	size_t	len = 6;

	free (printf("%s\n", ft_substr(s, start, len)));
	return (0);
}*/
