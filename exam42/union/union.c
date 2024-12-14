#include <unistd.h>

int check(char *str, char c, int pos)
{
	int i = 0;
	while(i < pos)
	{
		if (str[i] == c)
			return 0;
		i++;
	}
	return 1;
}
void funion(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	while(s1[i])
	{
		if (check(s1, s1[i], i) == 1)
			write(1, &s1[i], 1);
		i++;
	}
	j = 0;
	while(s2[j])
	{
		if (check(s1,s2[j],i) == 1 && check(s2,s2[j],j) == 1)
			write(1,&s2[j], 1);
		j++;
	}
}
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		funion(argv[1],argv[2]);
		write(1,"\n", 1);
	}
	else
		write(1,"\n", 1);
}
