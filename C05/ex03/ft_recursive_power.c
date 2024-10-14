/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thchau <thchau@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 10:46:09 by thchau            #+#    #+#             */
/*   Updated: 2024/06/27 11:39:36 by thchau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if ((power == 0) || nb == 1)
		return (1);
	if (power == 1)
		return (nb);
	return (nb * ft_recursive_power(nb, power -1));
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
			ft_recursive_power(nb[i], power[j]));
		}
	}
	return 0;
}*/