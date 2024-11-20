#include "printf.h"

void    ft_putuint(unsigned int n)
{
    if(n > 9)
    {
        ft_putuint(n / 10);
        ft_putuint(n % 10);
    }
    if(n <= 9)
    {
        n = n % 10;
        ft_putchar((n + 48));
    }
}