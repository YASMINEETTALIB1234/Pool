#include <unistd.h>

int main(int argc, char **argv)
{
	int i;

	if (argc < 2)
		write(1, "\n", 1);
	else
	{
		i = 0;
		while(argv[argc - 1][i] != '\0')
		{
			write(1, &argv[argc - 1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
}