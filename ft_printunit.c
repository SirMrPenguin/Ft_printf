/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joabotel <joabotel@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:06:51 by joabotel          #+#    #+#             */
/*   Updated: 2025/04/22 16:18:09 by joabotel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printunit(unsigned int n)
{
	int		count;
	char	c;

	count = 0;
	if (n >= 10)
	{
		count += ft_printunit(n / 10);
		count += ft_printunit(n % 10);
	}
	if (n < 10)
	{
		c = n + '0';
		count += write(1, &c, 1);
	}
	return (count);
}
