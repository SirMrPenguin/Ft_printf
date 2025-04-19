/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joabotel <joabotel@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 16:55:50 by joabotel          #+#    #+#             */
/*   Updated: 2025/04/19 17:14:25 by joabotel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex(unsigned int n, int is_lowercase)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += ft_printhex(n / 16, is_lowercase);
	if (is_lowercase)
		count += write(1, &"0123456789abcdef"[n % 16], 1);
	else
		count += write(1, &"0123456789ABCDEF"[n % 16], 1);
	return (count);
}
