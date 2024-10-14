/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thchau < thchau@student.42prague.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 09:20:33 by thchau            #+#    #+#             */
/*   Updated: 2024/06/19 09:16:20 by thchau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b == 0)
		return ;
	*div = a / b;
	*mod = a % b;
}

/*#include <stdio.h>
int	main(void)
{
	int a = 8;
	int b = 5;
	int div;
	int mod;
	printf("START a = %d b = %d\n", a, b);
	ft_div_mod(a, b, &div, &mod);
	printf("END div = %d mod = %d\n", div, mod);

}
*/