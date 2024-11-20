#ifndef PRINTF_H
#define PRINTF_H


#include <unistd.h>
#include <libc.h>

int     ft_printf(const char *str, ...);
void    ft_putnbr(int n);
void    ft_putstr(char *s);
void    ft_putchar(char c);
void    ft_putuint(unsigned int n);

#endif