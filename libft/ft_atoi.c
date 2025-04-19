/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joabotel <joabotel@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 20:36:43 by joabotel          #+#    #+#             */
/*   Updated: 2025/04/14 18:40:51 by joabotel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	nb;
	int	min;

	nb = 0;
	min = 0;
	while ((*str >= 9 && *str <= 13) || (*str == ' '))
		str++;
	if ((*str == '-') || (*str == '+'))
	{
		if (*str == '-')
			min++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nb *= 10;
		nb += *str - 48;
		str++;
	}
	if (min % 2 == 0)
		return (nb);
	return (-nb);
}
/*
#include <stdio.h>

int	main(int ac, char **av){
	(void)ac;
	printf("%d\n", ft_atoi(av[1]));
}
*/
