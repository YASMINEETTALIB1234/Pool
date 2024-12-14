/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettalib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 14:48:43 by yettalib          #+#    #+#             */
/*   Updated: 2024/06/29 16:26:59 by yettalib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		change;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		change = tab[i];
		tab[i] = tab[j];
		tab[j] = change;
	}
	i++;
	j--;
}
