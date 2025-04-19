/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joabotel <joabotel@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 20:30:01 by joabotel          #+#    #+#             */
/*   Updated: 2025/04/10 13:55:53 by joabotel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	l;

	l = n;
	if (l < 0)
	{
		ft_putchar_fd('-', fd);
		l = -l;
	}
	if (l < 10)
	{
		l += 48;
		ft_putchar_fd(l, fd);
	}
	else
	{
		ft_putnbr_fd(l / 10, fd);
		ft_putnbr_fd(l % 10, fd);
	}
}
/*
int	main()
{
	ft_putnbr_fd(404, 1);	
	write(1, "\n", 1);
	ft_putnbr_fd(-2147483648, 1);	
	write(1, "\n", 1);
	ft_putnbr_fd(2147483647, 1);	
	write(1, "\n", 1);
	ft_putnbr_fd(0, 1);	
}*/
