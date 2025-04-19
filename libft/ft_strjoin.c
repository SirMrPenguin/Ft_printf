/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joabotel <joabotel@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 17:59:24 by joabotel          #+#    #+#             */
/*   Updated: 2025/04/10 18:48:25 by joabotel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	size_t	s1_len;
	size_t	s2_len;
	char	*str;

	i = 0;
	j = 0;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	str = ft_calloc((s1_len + s2_len + 1), sizeof(char));
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(){
	const char *s1 = "Hello, ";
	const char *s2 = "World!";
	char *new = ft_strjoin(s1, s2);
	printf("%s\n", new);
	free (new);
}*/
