#include <stdio.h>
#include <stdlib.h>
int len(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return i;
}
char *ft_strdup(char *src)
{
	int i;
	char *tab;

	i = 0;
	tab = (char *)malloc((len(src) - 1) * sizeof(char));
	if (tab == NULL)
		return NULL;
	else
	{
		while(src[i] != '\0')
		{
			tab[i] = src[i];
			i++;
		}
		tab[i] = '\0';
	}
	return tab;
}
int main()
{
	char str[] = "yasmine zwina";
	printf("%s",ft_strdup(str));
	return 0;
}

