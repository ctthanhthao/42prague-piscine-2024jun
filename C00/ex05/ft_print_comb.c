/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thchau < thchau@student.42prague.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 09:31:36 by thchau            #+#    #+#             */
/*   Updated: 2024/06/24 10:03:40 by thchau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_3_digits(char d1, char d2, char d3)
{
	write(1, &d1, 1);
	write(1, &d2, 1);
	write(1, &d3, 1);
}

void	ft_print_new_ln_or_comma(char d1, char d2, char d3)
{
	if (d1 == '7' && d2 == '8' && d3 == '9')
	{
		return ;
	}
	else
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	d1;
	char	d2;
	char	d3;

	d1 = '0';
	while (d1 <= '7')
	{
		d2 = d1 + 1;
		while (d2 <= '8')
		{
			d3 = d2 + 1;
			while (d3 <= '9')
			{
				ft_print_3_digits(d1, d2, d3);
				ft_print_new_ln_or_comma(d1, d2, d3);
				d3++;
			}
			d2++;
		}
		d1++;
	}
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
