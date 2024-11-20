#include "printf.h"

static void    chek_type(char c, va_list args)
{
   if (c == 'c')
		ft_putchar(va_arg(args, int));
	else if (c == 's')
		ft_putstr(va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(args, int));
    else if (c == 'u')
        ft_putuint(va_arg(args, unsigned int));
}

static int    check_format(char c)
{
    int i = 0;
    char *set = "cspdiuxX%";
    while (set[i])
    {
        if(set[i] == c)
            return 1;
        i++;
    }
    return 0;
}

int ft_printf(const char *str, ...)
{
    va_list (args);
    va_start(args, str);
    int i = 0;
    while(str[i])
    {
        if(str[i] == '%' && str[i + 1] == '%')
        {
            ft_putchar('%');
            i++;
        }
        else if(str[i] == '%')
        {
            i++;
            if(check_format(str[i]))
            {
                chek_type(str[i], args);
            }
        }
        else
            ft_putchar(str[i]);
        i++;
    }
    return (1);
}

int main()
{
    char *s = "lll";
    int n = 9;
    char c = '0';
    unsigned int a = 12;
    ft_printf("%s\n", s);
    ft_printf("%d\n", n);
    ft_printf("%c\n", c);
    ft_printf("%u\n", a);
}