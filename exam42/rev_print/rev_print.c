#include <unistd.h>
int len(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return i;
}
void reverse(char *str)
{
	int i;
	int j;
	int tmp;

	i = 0;
	j = len(str) - 1;
	while(i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
}
int main(int argc,char **argv)
{
	int i;

	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		i = 0;
		reverse(argv[1]);
		while(argv[1][i] != '\0')
		{
			write(1, &argv[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
}


