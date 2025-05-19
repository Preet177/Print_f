#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_printf(const char *format, ...);
int	ft_handle_error(char c);
int	ft_charprint(int c);
int	ft_stringprint(char *str);
int	ft_unsignedprint(unsigned int n);
int	ft_hexprint(unsigned int n, int uppercase);
int	ft_intprint(int n);
int	ft_pointerprint(void *ptr);
int	ft_putchar(char c);
int	ft_putnbr(int nb);
int	ft_toupper(int c);

#endif