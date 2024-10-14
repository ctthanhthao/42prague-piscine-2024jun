/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thchau < thchau@student.42prague.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 09:23:22 by thchau            #+#    #+#             */
/*   Updated: 2024/06/19 09:17:24 by thchau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	if (*b == 0)
		return ;
	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*#include <stdio.h>
int main(void)
{
	int a = 9;
	int b = 4;
	printf("START a = %d b = %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("END a = %d b = %d\n", a, b);
}*/
