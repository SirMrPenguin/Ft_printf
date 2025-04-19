/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joabotel <joabotel@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 12:54:18 by joabotel          #+#    #+#             */
/*   Updated: 2025/04/09 15:17:19 by joabotel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((unsigned char)c == *((unsigned char *)s + i))
			return ((void *)((unsigned char *)s + i));
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int	main(){
	const char	*str = "Hello, World!";
	int	c = 'o';
	size_t	n = 5;
	size_t	i = 4;

	printf("%s\n", (char *)ft_memchr(str, c, n));
	printf("%s\n", (char *)ft_memchr(str, c, i));
}*/
