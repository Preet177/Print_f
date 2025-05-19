#include "../ft_printf.h"

int	ft_unsignedprint(unsigned int n)
{
	int	printed_chars;

	printed_chars = 0;
	printed_chars = ft_putnbr(n);
	return (printed_chars);
}
