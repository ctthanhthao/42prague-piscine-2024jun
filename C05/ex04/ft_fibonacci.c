/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thchau <thchau@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 10:46:16 by thchau            #+#    #+#             */
/*   Updated: 2024/06/27 11:39:06 by thchau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*#include <stdio.h>
int main(void)
{
	int index[5] = {-3, 0, 1, 2, 6};
	for (int i = 0; i < 5; i++)
	{
		printf("fibonaci number at: %d then result: %d\n", index[i],
		 ft_fibonacci(index[i]));
	}
	return (0);
	
}*/