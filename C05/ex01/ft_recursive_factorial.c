/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thchau <thchau@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 10:55:24 by thchau            #+#    #+#             */
/*   Updated: 2024/06/27 10:56:22 by thchau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
/*#include <stdio.h>
int	main()
{
	int nb[4] = {-4, 0, 1, 4};
	for (int i = 0; i < 4; i++)
	{
		printf("Factorial of %i is %i\n", nb[i], 
		ft_recursive_factorial(nb[i]));
	}
	return (0);
}*/