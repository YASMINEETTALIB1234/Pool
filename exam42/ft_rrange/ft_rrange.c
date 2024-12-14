#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int i;
	int j;
	int *tab = NULL;

	if (start >= end)
	{
		tab = (int *)malloc((start - end + 1) * sizeof(int));
		if (tab == NULL)
			return 0;
		i = 0;
		j = start - end + 1;
		while(i <= j)
		{
			tab[i] = end;
			i++;
			end++;
		}
	}
	else if(start < end)
	{
		tab = (int *) malloc((end - start + 1) * sizeof(int));
		if (tab == NULL)
			return 0;
		i = 0;
		j = end - start + 1;
		while(i <= j)
		{
			tab[i] = end;
			i++;
			end--;
		}
	}
	return tab;
}
int main()
{
	int *tab;
	int i;
	tab = ft_rrange(0,0);
	i = 0;
	while(i < 1)
	{
		printf("%d",tab[i]);
		i++;
	}
}
