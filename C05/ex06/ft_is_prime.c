/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thchau <thchau@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 11:21:26 by thchau            #+#    #+#             */
/*   Updated: 2024/06/27 11:42:14 by thchau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*#include <stdio.h>
int main()
{
	int nb[10] = {0, 1, 2, 3, 4, 6 ,25, 11, 19, 221};
	for (int i = 0; i < 10; i++)
	{
		printf("nb: %d then prime: %d\n", nb[i], ft_is_prime(nb[i]));
	}
}*/