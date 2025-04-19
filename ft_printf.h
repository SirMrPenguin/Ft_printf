#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *s, ...);
int		ft_printnum(int c);
int		ft_printstr(char *s);
int		ft_printchr(char c);

#endif
