#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int j;

	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		i = 1;
		j = 0;
		while(argv[1][j] != '\0')
		{
			i = 1;
			if (argv[1][j] >= 'a' && argv[1][j] <= 'z')
			{
				while (i <= argv[1][j] - 'a' + 1)
				{
					write(1, &argv[1][j], 1);
					i++;
				}
			}
			else if (argv[1][j] >= 'A' && argv[1][j] <= 'Z')
			{
				while (i <= argv[1][j] - 'A' + 1)
				{
					write(1, &argv[1][j], 1);
					i++;
				}
			}
			else
			{
				write(1, &argv[1][j], 1);
			}
			j++;
		}
		write(1, "\n", 1);
	}
}

