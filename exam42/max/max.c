#include <stdio.h>

int maxi(int *tab, unsigned int len)
{
	int i;
	int max;
	i = 0;
	max = tab[0];
	while(i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return max;
}
int main()
{
	int tab[] = {2,91,34,86,2,0};
	printf("%d",maxi(tab,6));
	return 0;
}
