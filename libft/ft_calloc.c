/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joabotel <joabotel@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 12:46:36 by joabotel          #+#    #+#             */
/*   Updated: 2025/04/13 14:15:28 by joabotel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    size_t nmemb = 10;
    size_t size = 1;
    unsigned char *ptr = ft_calloc(nmemb, size);

    if (!ptr)
    {
        printf("Memory allocation failed.\n");
        return (1);
    }

    printf("Allocated memory (nmemb = %zu, size = %zu):\n", nmemb, size);
    for (size_t i = 0; i < nmemb * size; i++)
    {
        printf("ptr[%zu] = %d\n", i, ptr[i]);
    }

    free(ptr);
    return (0);
}
*/
