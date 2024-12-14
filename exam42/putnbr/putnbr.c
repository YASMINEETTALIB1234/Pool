#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void putnbr(int nbr)
{
	if (nbr == -2147483648)
	{
	   write(1, "-2147483648", 11);
	   return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr > 9)
	{
		putnbr(nbr / 10);
		putnbr(nbr % 10);
	}
	else
		ft_putchar(nbr + '0');
}

int main()
{
	int nb = 3456748;
	putnbr(nb);
}
