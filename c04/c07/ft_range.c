/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettalib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 15:55:48 by yettalib          #+#    #+#             */
/*   Updated: 2024/07/18 18:16:37 by yettalib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_range(int min, int max)
{
	int		i;
	int		size;
	int		*tab;

	if (min >= max)
		return (NULL);
	else
	{
		size = max - min;
		tab = (int *) malloc(size * sizeof(int));
		if (tab == NULL)
			return (NULL);
		else
		{
			i = 0;
			while (i < size)
			{
				tab[i] = min;
				i++;
				min++;
			}
		}
	}
	return (tab);
}
