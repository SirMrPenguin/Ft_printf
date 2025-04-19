/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joabotel <joabotel@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 20:34:30 by joabotel          #+#    #+#             */
/*   Updated: 2025/04/12 16:32:12 by joabotel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*str;
	int		buf_size;

	buf_size = ft_strlen(src) + 1;
	str = malloc(buf_size);
	if (!str)
		return (NULL);
	ft_strlcpy(str, src, buf_size);
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char *str = "Hello, world!";
	char *dup_str;

	dup_str = ft_strdup(str);
	if (dup_str)
		printf("Original: %s\nDuplicate: %s\n", str, dup_str);
	else
		printf("Memory allocation failed\n");
	free(dup_str);
	return (0);
}*/