/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joabotel <joabotel@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:03:50 by joabotel          #+#    #+#             */
/*   Updated: 2025/04/12 16:28:39 by joabotel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if ((char)c == *(s + len))
			return ((char *)(s + len));
		len--;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main(void)
{
	char str[] = "Hello, world!";
	char *result;

	result = ft_strrchr(str, 'o');
	if (result)
		printf("Found: %s\n", result);
	else
		printf("Not found\n");
	return (0);
}*/
