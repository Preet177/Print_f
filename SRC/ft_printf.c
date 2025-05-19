#include "../ft_printf.h"

static int	ft_handle_specifier(const char **format, va_list args)
{
    if (**format == '%')
        return (ft_putchar('%'));
    else if (**format == 'c')
        return (ft_charprint(va_arg(args, int)));
    else if (**format == 's')
        return (ft_stringprint(va_arg(args, char *)));
    else if (**format == 'p')
        return (ft_pointerprint(va_arg(args, void *)));
    else if (**format == 'd' || **format == 'i')
        return (ft_intprint(va_arg(args, int)));
    else if (**format == 'u')
        return (ft_unsignedprint(va_arg(args, unsigned int)));
    else if (**format == 'x' || **format == 'X')
        return (ft_hexprint(va_arg(args, unsigned int), (**format == 'X')));
    else
        return (ft_handle_error(**format));
}

int	ft_printf(const char *format, ...)
{
	int			printed_chars;
	va_list		args;
	const char	*f;

	printed_chars = 0;
	va_start(args, format);
	f = format;
	while (*f)
	{
		if (*f == '%')
		{
			f++;
			if (*f == '\0')
				break ;
			printed_chars += ft_handle_specifier(&f, args);
		}
		else
		{
			printed_chars += ft_putchar(*f);
		}
		f++;
	}
	va_end(args);
	return (printed_chars);
}
