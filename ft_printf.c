#include "ft_printf.h"

static	int	ft_check(char *s, int i, va_list p)
{
	if (s[i] == 'd' || s[i] == 'i')
		return (ft_printnum(va_arg(p, int)));
	else if (s[i] == 's')
		return (ft_printstr(va_arg(p, char *)));
	else if (s[i] == 'c')
		return (ft_printchr(va_arg(p, int)));
	return (0);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		count;
	va_list	p;

	i = -1;
	count = 0;
	va_start(p, s);
	while (s[++i] != '\0')
	{
		if (s[i] == '%')
		{
			if (s[i + 1] == '%' && ++count)
				write(1, &s[++i], 1);
			else
				count += ft_check((char *)s, ++i, p);
		}
		else
			count += write(1, &s[i], 1);
	}
	va_end(p);
	return (count);
}

int	main(){
	char	*str;
	int	n = 12;
	char	c = 'o';
	str = "hello world!";
	ft_printf("%s\n", str);
	ft_printf("%d\n", n);
	ft_printf("%c\n", c);
}
