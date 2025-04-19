/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joabotel <joabotel@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:57:50 by joabotel          #+#    #+#             */
/*   Updated: 2025/04/10 14:34:45 by joabotel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (!dst && size == 0)
		return (src_len);
	dst_len = ft_strlen(dst);
	if (dst_len >= size)
		return (src_len + size);
	size -= dst_len;
	ft_strlcpy(dst + dst_len, src, size);
	return (dst_len + src_len);
}
/*
#include <stdio.h>
int main() {
    char dst[20] = "Hello, ";
    const char *src = "world!";
    size_t size = 20;

    size_t result = ft_strlcat(dst, src, size);

    printf("Resulting string: %s\n", dst);
    printf("Total length: %zu\n", result);

    return 0;
}*/
