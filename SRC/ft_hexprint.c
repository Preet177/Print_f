#include "../ft_printf.h"

int	ft_hexprint(unsigned int n, int uppercase)
{
	char	hex_buffer[20];
	int		i = 0;
	int		printed_chars = 0;

	if (n == 0)
	{
		ft_putchar('0');
		return (1);
	}

	char	hex_digits[] = "0123456789abcdef";
	while (n != 0)
	{
		hex_buffer[i++] = hex_digits[n % 16];
		n /= 16;
	}

	while (i > 0)
	{
		char c = hex_buffer[--i];
		if (uppercase)
			c = ft_toupper(c);
		ft_putchar(c);
		printed_chars++;
	}

	return (printed_chars);
}

