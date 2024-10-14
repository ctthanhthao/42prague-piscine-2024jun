/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thchau <thchau@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 10:46:45 by thchau            #+#    #+#             */
/*   Updated: 2024/06/27 11:41:15 by thchau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt_recur(int sqrt, int nb)
{
	if (sqrt * sqrt > nb)
		return (0);
	if (sqrt * sqrt == nb)
		return (sqrt);
	return (ft_sqrt_recur(sqrt + 1, nb));
}

int	ft_sqrt(int nb)
{
	if (nb == 1)
		return (1);
	if (nb == 2)
		return (0);
	return (ft_sqrt_recur(2, nb));
}

/*#include <stdio.h>
int main()
{
	int nb[7] = {0, 1, 2, 9, 6 ,25, 100};
	for (int i = 0; i < 7; i++)
	{
		printf("nb: %d then sqrt: %d\n", nb[i], ft_sqrt(nb[i]));
	}
}*/