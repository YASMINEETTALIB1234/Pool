#include <unistd.h>

int main(int argc,char **argv)
{
	int i;
	int j;
	int k;

	if (argc != 3)
		write(1,"\n", 1);
	else
	{
		i = 0;
		j = 0;
		k = 0;
		while(argv[1][i] && argv[2][j])
		{
			if (argv[1][i] == argv[2][j])
				i++;
			j++;
		}
		if (argv[1][i] == '\0')
		{
			while(argv[1][k])
				write(1,&argv[1][k++],1);
		}
		write(1, "\n",1);
	}
}
