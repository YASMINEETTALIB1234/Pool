/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettalib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:17:36 by yettalib          #+#    #+#             */
/*   Updated: 2024/07/08 18:26:19 by yettalib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int		i;
	int		p;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 1;
	p = 1;
	while (i <= power)
	{
		p = p * nb;
		i++;
	}
	return (p);
}
/*int main()
{
	printf("%d",ft_iterative_power(3,0));
	return 0;
}*/
