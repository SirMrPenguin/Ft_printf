/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joabotel <joabotel@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 16:55:53 by joabotel          #+#    #+#             */
/*   Updated: 2025/04/19 17:14:02 by joabotel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
