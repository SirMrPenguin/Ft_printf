/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joabotel <joabotel@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 16:55:47 by joabotel          #+#    #+#             */
/*   Updated: 2025/04/23 19:37:02 by joabotel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *s, ...);
int		ft_printnum(int c);
int		ft_printunit(unsigned int n);
int		ft_printstr(char *s);
int		ft_printchr(char c);
int		ft_printhex(unsigned int n, int base);
int		ft_printptr(unsigned long long n);
#endif
