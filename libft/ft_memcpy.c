/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joabotel <joabotel@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:53:51 by joabotel          #+#    #+#             */
/*   Updated: 2025/04/14 19:02:59 by joabotel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		*((unsigned char *)dest + i) = *((unsigned char *)src + i);
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
int	main(){
	char s1[] = "hello";
	char s2[] = "ola";
	size_t	n = 6;
	printf("src = %s\ndest = %s\n", s1, s2);
	printf("new dest = %s\n", (char*)ft_memcpy(s2, s1, n));
}*/
