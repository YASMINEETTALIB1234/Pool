#include <unistd.h>

void putnbr(int nb)
{
	if (nb >= 10)
		putnbr(nb / 10);
	char degit = nb % 10 + '0';
	write(1,&degit,1);
}

int atoi(char *str)
{
	int r;
	r = 0;
	while(*str)
	{
		r = r * 10 + *str - '0';
		str++;
	}
	return r;
}

int is_prime(int nb)
{
	int i;
	if (nb <= 1)
		return 0;
	else
	{
		i = 2;
		while(i * i <= nb)
		{
			if (nb % i == 0)
				return 0;
			i++;
		}
		return 1;
	}
}
int main(int argc, char **argv)
{
	int s;
	int a;
	if (argc == 2)
	{
		s = 0;
		a = atoi(argv[1]);
		while(a >= 0)
		{
			if (is_prime(a))
				s = s + a;
			a--;
		}
		putnbr(s);
		write(1, "\n", 1);
	}
	else
		write(1,"0\n", 2);
	return 0;
}
