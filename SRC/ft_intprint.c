#include "../ft_printf.h"

int ft_intprint(int n)
{
    int printed_chars = 0;

    if (n < 0)
    {
        printed_chars += ft_putchar('-');
        n = -n;
    }

    printed_chars += ft_putnbr(n);
    return (printed_chars);
}
