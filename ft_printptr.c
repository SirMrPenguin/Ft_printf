/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joabotel <joabotel@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:30:42 by joabotel          #+#    #+#             */
/*   Updated: 2025/04/22 18:24:16 by joabotel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printad(unsigned long long n)
{
	int	count;

	count = 0;
	if (n < 16)
		count += write(1, &"0123456789abcdef"[n], 1);
	if (n >= 16)
	{
		count += ft_printad(n / 16);
		count += ft_printad(n % 16);
	}
	return (count);
}

int	ft_printptr(unsigned long long n)
{
	int		count;

	if (!n)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	count = 2;
	write(1, "0x", 2);
	count += ft_printad(n);
	return (count);
}
