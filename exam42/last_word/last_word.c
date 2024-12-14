#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int end;

	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		i = 0;
		while(argv[1][i])
			i++;
		end = i - 1;
		while(end >= 0 && (argv[1][end] == ' ' || argv[1][end] == '\t'))
			end--;
		while(end >= 0 && (argv[1][end] != ' ' && argv[1][end] != '\t'))
			end--;
		while(argv[1][end + 1] != '\0' && argv[1][end + 1] != ' ' && argv[1][end + 1] != '\t')
		{
			write(1, &argv[1][end + 1], 1);
			end++;
		}
		write(1, "\n", 1);
	}
}
