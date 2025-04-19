/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joabotel <joabotel@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 19:23:14 by joabotel          #+#    #+#             */
/*   Updated: 2025/04/13 16:19:29 by joabotel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	while (n-- > 0)
		*((unsigned char *)s + n) = (unsigned char)c;
	return (s);
}
/*
#include <stdio.h>
int	main(void)
{
	char arr[11];
	ft_memset(arr, '!', 10);
	arr[10] = '\0';
	printf("%s\n", arr);
}*/
