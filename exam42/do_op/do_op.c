#include <unistd.h>
#include <stdio.h>

int atoi(char *str)
{
	int s;
	int r;

	s = 1;
	r = 0;
	while(*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			s = s * (-1);
		str++;
	}
	while(*str >= '0' && *str <= '9')
	{
		r = r * 10 + *str - '0';
		str++;
	}
	return (s * r);
}

int main(int argc, char **argv)
{
	int a;
	int b;
	char op;
	int r;

	if (argc != 4)
		write(1, "\n", 1);
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		op = argv[2][0];
		if (op == '+')
			r = a + b;
		else if(op == '-')
			r = a - b;
		else if(op == '/')
			r = a / b;
		else if (op == '*')
			r = a * b;
		else if (op == '%')
			r = a % b;
		printf("%d",r);
		write(1, "\n", 1);
	}
}

