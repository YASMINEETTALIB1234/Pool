#include <stdio.h>

int ft_atoi(cont char *str)
{
	int s = 1;
	int r = 0;

	while (*str == 32 || (str >= 9 && str <= 13))
		str++;
	if (*str == '+' || *str =='-')
	{
		if (*str == '-')
			s = s * (-1);
		*str++;
	}
	while(*str >= '0' && *str <= '9')
	{
		r = r * 10 + *str - '0';
		*str++;
	}
	return r * sign;
}
