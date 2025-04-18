#include "ft_printf.h"

int	ft_printstr(char *s)
{
	int	i;

	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	i = ft_strlen(s);
	ft_putstr_fd(s, 1);
	return (i);
}
