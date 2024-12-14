/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettalib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 19:13:23 by yettalib          #+#    #+#             */
/*   Updated: 2024/07/18 15:31:41 by yettalib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	len(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*tab;
	int		i;

	i = 0;
	tab = (char *) malloc((len(src) + 1) * sizeof(char));
	if (tab == NULL)
		return (NULL);
	else
	{
		while (src[i])
		{
			tab[i] = src[i];
			i++;
		}
		tab[i] = '\0';
	}
	return (tab);
}

/*int main()
{
	char str[] = "yasmine";
	printf("%s",ft_strdup(str));
}*/
