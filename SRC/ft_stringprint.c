#include "../ft_printf.h"

int ft_stringprint(char *str)
{
    int len = 0;
    if (!str)
        str = "(null)";
    while (str[len])
    {
        ft_putchar(str[len]);
        len++;
    }
    return (len);
}