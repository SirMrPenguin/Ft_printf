#include "ft_printf.h"

int	ft_printnum(int n)
{
	int		i;
	long	j;

	i = 0;
	j = n;
	ft_putnbr_fd(n, 1);
	if (j < 0)
	{
		j = -j;
		i++;	
	}
	else if (j == 0)
		return (1);
	while (j > 0)
	{
		j /= 10;
		i++;
	}
	return (i);
}
