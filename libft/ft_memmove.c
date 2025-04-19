/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joabotel <joabotel@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:20:11 by joabotel          #+#    #+#             */
/*   Updated: 2025/04/09 18:44:34 by joabotel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest > src)
	{
		while (n > 0)
		{
			n--;
			*((unsigned char *)dest + n) = *((unsigned char *)src + n);
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
/*
#include <stdio.h>

int main() {
    char str1[] = "Hello, ";
    char str2[] = "World!";
    
    printf("Before ft_memmove:\n");
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    

    ft_memmove(str1 + 7, str2, 7);
    
    printf("\nAfter ft_memmove:\n");
    printf("str1: %s\n", str1);
    
    return 0;
}*/
