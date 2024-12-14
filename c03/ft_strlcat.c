/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettalib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 22:55:50 by yettalib          #+#    #+#             */
/*   Updated: 2024/07/03 10:45:22 by yettalib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	len(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (size > 0)
	{
		while (dest[i] != '\0')
			i++;
		j = 0;
		while (src[j] != '\0' && j < size - 1)
		{
			dest[i + j] = src[j];
			j++;
		}
		dest [i + j] = '\0';
	}
	return (len(src));
}
/*
int main()
{
	char dest[] = "yasmine";
	char src[] = "hasnae";
	printf("%d",ft_strlcat(dest,src,7));
	return 0;
}*/
