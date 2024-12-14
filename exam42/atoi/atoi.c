#include <stdio.h>

int ft_atoi(char *str)
{
	int s;
	int r;
	s= 1;
	r = 0;
	while(*str == ' '  ||  (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			s *= -1;
		str++;
	}
	while(*str >= '0' && *str <= '9')
	{
		r = r * 10 + *str - '0';
		str++;
	}
	return (s * r);
}
int main()
{
	char str[] = "    -21443434";
	printf("%d",ft_atoi(str));
	return 0;
}
