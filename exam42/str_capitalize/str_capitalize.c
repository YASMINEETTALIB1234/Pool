#include <unistd.h>

int len(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return i;
}

void ft_strcapitalize(char *str)
{
	int i;

	i= 0;
	while(str[i])
	{
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
		}
		else if(!(str[i-1] >= 'a' && str[i-1] <= 'z')
				&& !(str[i-1] >= '0' && str[i-1] <= '9')
				&& !(str[i-1] >= 'A' && str[i-1] <= 'Z'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		i++;
	}
	write(1, str,len(str));
}


int main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_strcapitalize(argv[1]);
		write(1,"\n", 1);
	}
	else
		write(1,"\n", 1);
}
