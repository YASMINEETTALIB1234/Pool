/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yettalib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 16:12:09 by yettalib          #+#    #+#             */
/*   Updated: 2024/07/08 16:43:23 by yettalib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int		f;
	int		i;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	f = 1;
	i = 1;
	while (i <= nb)
	{
		f = f * i;
		i++;
	}
	return (f);
}
/*int main()
{
	printf("%d",ft_iterative_factorial(10));
	return 0;
}*/
