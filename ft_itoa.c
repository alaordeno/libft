/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:27:49 by alaorden          #+#    #+#             */
/*   Updated: 2025/10/22 12:16:32 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
/* {
	int	y;

	y = 0;
	if (n == INT_MIN)
		return (10);
	if (n == 0)
		return (1);
	if (n < 0)
		n = n * -1;
	while (n > 0)
	{
		n = n / 10;
		y++;
	}
	return (y);
} */

{
	int	len;

	len = (n <= 0);
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*x;
	long	num;

	len = ft_intlen(n);
	x = (char *)malloc(sizeof(char) * len + 1);
	if (!x)
		return (NULL);
	x[len] = '\0';
	num = n;
	if (num < 0)
	{
		num = num * -1;
		x[0] = '-';
	}
	while (num > 0)
	{
		x[--len] = (num % 10) + '0';
		num = num / 10;
	}
	return (x);
}

/* int	main(void)
{
	char	*x = ft_itoa(INT_MAX);
	
	printf("%s\n", x);
}
 */