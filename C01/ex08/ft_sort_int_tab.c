/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thchau < thchau@student.42prague.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 09:40:01 by thchau            #+#    #+#             */
/*   Updated: 2024/06/19 09:23:49 by thchau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j <= size - 1)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

/*#include <stdio.h>
int	main(void)
{
	int numbers[11] = {4354, 45, -343, 0, 45, 35, 14, -7, -30, 100, 60};
	ft_sort_int_tab(numbers, 11);
	for(int i = 0; i < 11; i++)
	{
		printf("%d ", numbers[i]);
	}
}*/
