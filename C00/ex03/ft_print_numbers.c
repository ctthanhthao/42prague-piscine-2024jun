/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thchau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 11:41:21 by thchau            #+#    #+#             */
/*   Updated: 2024/06/07 11:41:26 by thchau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_print_numbers(void)
{
	char	c;
	int		digit;

	digit = 0;
	while (digit <= 9)
	{
		c = digit + '0';
		write(1, &c, 1);
		digit++;
	}
}

/*int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
