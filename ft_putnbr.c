#include "printf.h"

void    ft_putnbr(int n)
{
    if(n == -2147483648)
        write(1, "-2147483648", 11);
    else if(n < 0)
    {
        ft_putchar('-');
        ft_putnbr(n * -1);
    }
    else if(n > 9)
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
    else if (n <= 9)
        ft_putchar(n + 48);
}