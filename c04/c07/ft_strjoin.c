/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettalib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:56:22 by yettalib          #+#    #+#             */
/*   Updated: 2024/07/18 16:05:38 by yettalib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_len(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	total_len(int size, char **strs, char *sep)
{
	int		i;
	int		len;

	len = 0;
	i = 0;
	while (i < size)
	{
		len = len + ft_len(strs[i]);
		if (i < size - 1)
			len = len + ft_len(sep);
		i++;
	}
	return (len);
}

char	*ft_cat(char *s1, char *s2)
{
	int		i;
	int		j;

	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[i + j] = '\0';
	return (s1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ptr;
	int		i;
	int		len;

	if (size == 0)
		return (malloc(sizeof(char)));
	len = total_len(size, strs, sep);
	ptr = (char *) malloc(sizeof(char) * (len + 1));
	ptr[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_cat(ptr, strs[i]);
		if (i < size - 1)
			ft_cat(ptr, sep);
		i++;
	}
	return (ptr);
}
