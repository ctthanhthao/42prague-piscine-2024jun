/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thchau < thchau@student.42prague.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 09:35:28 by thchau            #+#    #+#             */
/*   Updated: 2024/06/19 09:21:30 by thchau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	tmp;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		tmp = *(tab + start);
		*(tab + start) = *(tab + end);
		*(tab + end) = tmp;
		start++;
		end--;
	}
}

/*#include <stdio.h>
int	main(void)
{
	int numbers[6] = {1, 2, 3, 4, 5, 20};
	ft_rev_int_tab(numbers, 6);
	for(int i = 0; i < 6; i++)
	{
		printf("%d ", numbers[i]);
	}
}*/
