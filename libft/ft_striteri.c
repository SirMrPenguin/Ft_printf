/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joabotel <joabotel@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 12:47:00 by joabotel          #+#    #+#             */
/*   Updated: 2025/04/13 16:16:56 by joabotel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
/*
#include <stdio.h>

void my_function(unsigned int index, char *c) {
	(void)index;
	*c = *c + 32;
}
int main() {
	char str[] = "HELLO";
	ft_striteri(str, my_function);
	printf("%s\n", str);
	return 0;
}*/
