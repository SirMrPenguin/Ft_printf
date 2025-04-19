/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joabotel <joabotel@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 15:13:54 by joabotel          #+#    #+#             */
/*   Updated: 2025/04/10 15:13:58 by joabotel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		j;
	char	*h;

	i = 0;
	j = 0;
	h = (char *) big;
	if (!little[i])
		return (h);
	while (h[i] && i < len)
	{
		while (h[i + j] == little[j] && h[i + j] && (i + j) < len)
		{
			j++;
		}
		if (!little[j])
			return (&h[i]);
		j = 0;
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	char	str [] = "hello world";
	char	to_find [] = "lo";
	char	*res = ft_strnstr(str, to_find, 8);
	printf("%s\n", res);
}*/
