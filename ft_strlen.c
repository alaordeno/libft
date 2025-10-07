/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaorden <alaorden@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 19:56:54 by alaorden          #+#    #+#             */
/*   Updated: 2025/10/07 20:16:04 by alaorden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *x)
{
	int	i;

	i = 0;
	while (x[i] != '\0')
		i++;
	return (i);
}

int	main(void)
{
	char	*str1;

	*str1 = "Hola";
	printf("La longitud de '%s' es %d\n", str1, ft_strlen(str1));
	return (0);
}
 /* REVISAR EL MAIN*/