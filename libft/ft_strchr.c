/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joabotel <joabotel@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:22:36 by joabotel          #+#    #+#             */
/*   Updated: 2025/04/13 15:08:43 by joabotel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (1)
	{
		if ((char)c == s[i])
			return ((char *)(s + i));
		if (s[i] == '\0')
			break ;
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main(void)
{
	char str[] = "Hello, world!";
	char *result;

	result = ft_strchr(str, 'o');
	if (result)
		printf("Found: %s\n", result);
	else
		printf("Not found\n");
	return (0);
}*/
