/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joabotel <joabotel@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:36:33 by joabotel          #+#    #+#             */
/*   Updated: 2025/04/09 18:20:43 by joabotel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (*((unsigned char *)s1 + i) == *((unsigned char *)s2 + i)
		&& i < n - 1)
	{
		i++;
	}
	return (*((unsigned char *)s1 + i) - *((unsigned char *)s2 + i));
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **av){
	(void)ac;
	char	*str1 = av[1];
	char	*str2 = av[2];
	size_t	n = atoi(av[3]);
	printf("%d\n", ft_memcmp(str1, str2, n));
}*/
