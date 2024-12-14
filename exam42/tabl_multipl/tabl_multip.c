#include <unistd.h>

int atoi(char *s)
{
	int si;
	int i;
	int r;

	si=1;
	r=0;
	i=0;
	while(s[i] == ' ' || s[i] == '\t')
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			si = si * (-1);
		s++;
	}
	while(s[i] >= '0' && s[i] <= '9')
	{
		r = r * 10 + s[i] - '0';
		i++;
	}
	return (si * r);
}

void putnbr(int nb)
{
	if (nb > 9)
		putnbr(nb / 10);
	char c = nb % 10 + '0';
	write(1, &c, 1);
}

void table(int nb)
{
	int i;
	int multi;
	if (nb > 0)
	{
		i = 1;
		while(i < 10)
		{
			putnbr(i);
			write(1, " * ", 3);
			putnbr(nb);
			write(1, " = ", 3);
			multi = nb * i;
			putnbr(multi);
			write(1, "\n", 1);
			i++;
		}
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int a = atoi(argv[1]);
		table(a);
		write(1, "\n", 1);
	}
	else
		write(1,"\n", 1);
}
		
