#include "libft.h"

int	ft_isalpha(char x);

int	main(void)
{
	char	x;
	int		y;

	x = 'a';
	y = ft_isalpha(x);
	printf("%d", y);
	return (0);
}
