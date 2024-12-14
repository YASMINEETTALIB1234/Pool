#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_itoa(int nbr)
{
	if (nbr == -2147483648)
		return ("-2147483648\0");
	int nb = nbr;
	int len =0;
	if (nbr <= 0)
		len++;
	while(nb)
	{
		nb = nb / 10;
		len++;
	}
	char *tab;
	tab = (char *)malloc((len + 1) * sizeof(char));
	if (tab == NULL)
		return NULL;
	tab[len] = '\0';
	if (nbr == 0)
	{
		tab[0] = '0';
		return tab;
	}
	if (nbr < 0)
	{
		tab[0] = '-';
		nbr = -nbr;
	}
	while(nbr)
	{
		tab[--len] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	return tab;
}

int main(void)
{
    printf("%s\n", ft_itoa(33));
    printf("%s\n", ft_itoa(-33));
    printf("%s\n", ft_itoa(12345));
    printf("%s\n", ft_itoa(-12345));
    printf("%s\n", ft_itoa(98765));
    printf("%s\n", ft_itoa(-98765));
    printf("%s\n", ft_itoa(45));
    printf("%s\n", ft_itoa(-45));
    printf("%s\n", ft_itoa(-2147483648));
    printf("%s\n", ft_itoa(2147483647));
    printf("%s\n", ft_itoa(0));
    return (0);
}

