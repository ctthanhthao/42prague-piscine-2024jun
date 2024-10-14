/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thchau < thchau@student.42prague.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 09:18:32 by thchau            #+#    #+#             */
/*   Updated: 2024/06/19 09:15:39 by thchau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int*b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*#include <stdio.h>
int	main(void)
{
	int a = 8;
	int b = 9;
	printf("START a = %d b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("END a = %d b = %d\n", a, b);
}*/
