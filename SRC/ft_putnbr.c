#include "../ft_printf.h"

int	ft_putnbr(int nb)
{
	int printed_chars = 0;

	if (nb == -2147483648)
	{
		printed_chars += ft_putchar('-');
		printed_chars += ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		printed_chars += ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		printed_chars += ft_putnbr(nb / 10);
		printed_chars += ft_putnbr(nb % 10);
	}
	else
	{
		printed_chars += ft_putchar(nb + 48);
	}

	return (printed_chars);
}
