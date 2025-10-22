/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:10:13 by miaviles          #+#    #+#             */
/*   Updated: 2025/10/22 10:23:05 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*s2;
	size_t		s;
	size_t		e;
	size_t		c;

	if (!s1 || !set)
		return (NULL);
	s = 0;
	while (s1[s] && ft_strchr(set, s1[s]))
		s++;
	e = ft_strlen(s1);
	while (e > s && ft_strchr(set, s1[e - 1]))
		e--;
	s2 = (char *)malloc(sizeof(char) * (e - s + 1));
	if (!s2)
		return (NULL);
	c = 0;
	while (e > s)
		s2[c++] = s1[s++];
	s2[c] = '\0';
	return (s2);
}

/* int	main(void)
{
	char	s1[] = "++++42+ali++++";
	char	*r = ft_strtrim(s1, "+");
		
	printf("%s\n", r);
	free (r);
	return (0);
} */