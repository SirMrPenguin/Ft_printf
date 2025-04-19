/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joabotel <joabotel@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 13:44:31 by joabotel          #+#    #+#             */
/*   Updated: 2025/04/11 19:21:38 by joabotel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	space(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count++;
		n = -n;
	}
	if (n == 0)
		count++;
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static char	*alloc(int len)
{
	char	*tmp;

	tmp = malloc(len + 1);
	if (!tmp)
		return (NULL);
	tmp[0] = '0';
	return (tmp);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		len;
	long	nbr;

	nbr = n;
	len = space(nbr);
	str = alloc(len);
	if (!str)
		return (NULL);
	if (nbr < 0)
		nbr = -nbr;
	i = len - 1;
	while (nbr != 0)
	{
		str[i] = ((nbr % 10) + 48);
		nbr /= 10;
		i--;
	}
	if (n < 0)
		str[0] = '-';
	str[len] = 0;
	return (str);
}
/*
#include <stdio.h>
int	main(int ac, char **av){
	(void)ac;
	int n = atoi(av[1]);
	char *str = ft_itoa(n);
	printf("%s\n", str);
	free (str);	
}*/
