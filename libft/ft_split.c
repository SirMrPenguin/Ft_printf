/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joabotel <joabotel@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 21:00:09 by joabotel          #+#    #+#             */
/*   Updated: 2025/04/14 18:41:48 by joabotel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (s[0] != c && s[0])
		count++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1])
			count++;
		i++;
	}
	return (count);
}

static void	*bfree(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	i;
	int		j;
	int		n;

	i = -1;
	j = 0;
	n = -1;
	arr = malloc((count((char *)s, c) + 1) * sizeof(char *));
	if (!arr || !s)
		return (NULL);
	while (++i <= ft_strlen(s))
	{
		if (s[i] != c && n < 0)
			n = i;
		else if ((s[i] == c || i == ft_strlen(s)) && n >= 0)
		{
			arr[j] = ft_substr(s, n, (i - n));
			if (!arr[j++])
				return (bfree(arr));
			n = -1;
		}
	}
	arr[j] = 0;
	return (arr);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	(void)ac;
	int i = 0;
	char **arr = ft_split(av[1], ' ');
	while (arr[i])
	{
		printf("%s\n", arr[i]);
		i++;
	}
	
}*/
