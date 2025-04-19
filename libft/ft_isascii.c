/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joabotel <joabotel@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 20:29:45 by joabotel          #+#    #+#             */
/*   Updated: 2025/04/13 14:50:46 by joabotel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
#include <stdio.h>
int main(void)
{
    int test_values[] = {0, 65, 127, 128, -1, 200};
    int i = 0;

    while (i < 6)
    {
        int c = test_values[i];
        printf("ft_isascii(%d) = %d\n", c, ft_isascii(c));
        i++;
    }

    return 0;
}*/
