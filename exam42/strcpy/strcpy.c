#include <unistd.h>
#include <stdio.h>

char strcpy(char *s1, char *s2)
{
	int i;
	while(s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return s1;
}
