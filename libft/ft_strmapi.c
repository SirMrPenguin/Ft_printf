/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joabotel <joabotel@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 13:45:14 by joabotel          #+#    #+#             */
/*   Updated: 2025/04/13 16:19:04 by joabotel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	str = ft_calloc((ft_strlen(s) + 1), sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}
/*
char	up(unsigned int i, char c)
{
	(void) i;
	if (c >='a' && c <= 'z')
		return c - 32;
	return c;
}

#include <stdio.h>
int	main(int ac, char **av){
	char *s = av[1];
	(void)ac;
	char	(*f)(unsigned int, char);

	f = up;
	printf("%s\n", ft_strmapi(s, f));
}*/
