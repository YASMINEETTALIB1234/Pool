#include <stdio.h>
int len(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return i;
}

int count_words(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while(str[i])
	{
		if (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		{
			if (str[i - 1] >= 33 && str[i - 1] <= 126)
				count += 1;
		}
		if (i == (len(str) - 1) && (str[i] >= 33 && str[i] <= 126))
			count += 1;
		i++;
	}
	return count;
}
int main()
{
	char str[] = "      yasmine is a beautiful girl";
	printf("%d",count_words(str));
	return 0;
}
