#include "../ft_printf.h"

int ft_pointerprint(void *ptr)
{
    unsigned long long num = (unsigned long long)ptr;
    char *base = "0123456789abcdef";
    char buf[20];
    int len = 0;

    // Define ft_strlen
    int ft_strlen(char *str)
    {
        int len = 0;
        while (*str++)
            len++;
        return len;
    }

    // Define ft_strrev
    void ft_strrev(char *str)
    {
        int len = ft_strlen(str);
        for (int i = 0; i < len / 2; i++)
        {
            char tmp = str[i];
            str[i] = str[len - i - 1];
            str[len - i - 1] = tmp;
        }
    }

    buf[0] = '0';
    buf[1] = 'x';
    len += 2;

    if (num == 0)
    {
        buf[2] = '0';
        len++;
    }
    else
    {
        while (num > 0)
        {
            buf[len] = base[num % 16];
            num /= 16;
            len++;
        }
    }

    buf[len] = '\0';
    ft_strrev(&buf[2]);
    len = ft_strlen(&buf[2]) + 2;
    write(1, buf, len);
    return (len);
}
