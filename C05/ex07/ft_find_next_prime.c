/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thchau <thchau@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 11:33:43 by thchau            #+#    #+#             */
/*   Updated: 2024/06/27 11:38:14 by thchau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	if (i < 2)
		return (2);
	while (!ft_is_prime(i))
		i++;
	return (i);
}
/*#include <stdio.h>
int main()
{
	int nb[10] = {0, 1, 2, 3, 4, 6 ,25, 11, 19, 221};
	for (int i = 0; i < 10; i++)
	{
		printf("nb: %d then next prime: %d\n", nb[i], ft_find_next_prime(nb[i]));
	}
}*/