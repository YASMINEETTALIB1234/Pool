#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int *ft_range(int start, int end)
{
	int *tab = NULL;
	int i;
	int j;
	i = 0;
	if (start >= end)
	{
		tab = (int *) malloc((start - end + 1) * sizeof(int));
		if (tab == NULL)
			return 0;
		j = start - end  + 1;
		while(i <= j)
		{
			tab[i] = start;
			i++;
			start--;
		}
	}
	else if (start <  end)
	{
		tab = (int *) malloc((end - start + 1) * sizeof(int));
		if (tab == NULL)
			return 0;
		j = end  - start + 1;
		while(i <= j)
		{
			tab[i] = start;
			start++;
			i++;
		}
	}
	return tab;
}
int main()
{
	int *tab;
	int i;
	tab = ft_range(3,8);
	i = 0;
	while( i < 6)
	{
		printf("%d",tab[i]);
		i++;
	}
}
