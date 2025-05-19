#include "../ft_printf.h"

int	ft_handle_error(char c)
{
	ft_putchar('%');
	if (c)
	{
		ft_putchar(c);
		return (2);
	}
	else
	{
		return (1);
	}
}