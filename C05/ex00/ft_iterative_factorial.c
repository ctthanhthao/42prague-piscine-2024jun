/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thchau <thchau@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 10:49:46 by thchau            #+#    #+#             */
/*   Updated: 2024/06/27 10:55:56 by thchau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (result);
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
/*#include <stdio.h>
int	main()
{
	int nb[4] = {-4, 0, 1, 4};
	for (int i = 0; i < 4; i++)
	{
		printf("Factorial of %i is %i\n", nb[i], 
		ft_iterative_factorial(nb[i]));
	}
	return (0);
}*/