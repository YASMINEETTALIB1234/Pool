#include <unistd.h>
#include <stdio.h>

void putnbr(int nb)
{
	if (nb > 9)
		putnbr(nb / 10);
	char c = nb % 10 + '0';
	write(1, &c, 1);
}

int main(int argc,char **argv)
{
	(void)argv;
	if (argc >= 2)
	{
		putnbr(argc - 1);
		write(1, "\n", 1);
	}
	else
		write(1, "0\n", 2);
	return 0;
}
