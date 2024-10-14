/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thchau <thchau@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 10:56:48 by thchau            #+#    #+#             */
/*   Updated: 2024/06/27 11:08:40 by thchau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*#include <stdio.h>
int	 main()
{
	int nb[4] = {-3, 0, 1, 5};
	int power[4] = {-4, 0, 1, 3};
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%i power %i is %i\n",nb[i], power[j], 
			ft_iterative_power(nb[i], power[j]));
		}
	}
	return 0;
}*/