/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joabotel <joabotel@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 16:55:42 by joabotel          #+#    #+#             */
/*   Updated: 2025/04/22 18:37:47 by joabotel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check(char *s, int i, va_list ap)
{
	if (s[i] == 'd' || s[i] == 'i')
		return (ft_printnum(va_arg(ap, int)));
	else if (s[i] == 'u')
		return (ft_printunit(va_arg(ap, unsigned int)));
	else if (s[i] == 's')
		return (ft_printstr(va_arg(ap, char *)));
	else if (s[i] == 'p')
		return (ft_printptr(va_arg(ap, unsigned long long)));
	else if (s[i] == 'c')
		return (ft_printchr(va_arg(ap, int)));
	else if (s[i] == 'x' || s[i] == 'X')
		return (ft_printhex(va_arg(ap, unsigned int),
				s[i] == 'x'));
	return (0);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		count;
	va_list	ap;

	if (!s)
		return (-1);
	i = -1;
	count = 0;
	va_start(ap, s);
	while (s[++i])
	{
		if (s[i] == '%')
		{
			if (s[i + 1] == '%' && ++count)
				write(1, &s[++i], 1);
			else
				count += ft_check((char *)s, ++i, ap);
		}
		else
			count += write(1, &s[i], 1);
	}
	va_end(ap);
	return (count);
}
/*
#include <stdio.h>
int	main(){
	char	*str;
	int	n = -1;
	int	j = 1;
	char	c = 'o';
	str = "ahahaha";
	ft_printf("%s\n", str);
	ft_printf("%u\n", j);
	ft_printf("%X\n", n);
	ft_printf("%x\n", n);
	ft_printf("%c\n", c);
	ft_printf("%p\n", &str);
	ft_printf("%%");
}*/
