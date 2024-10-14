/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thchau < thchau@student.42prague.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 09:49:59 by thchau            #+#    #+#             */
/*   Updated: 2024/06/24 12:27:19 by thchau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_4_digits(char d1, char d2, char d3, char d4)
{
	write(1, &d1, 1);
	write(1, &d2, 1);
	write(1, " ", 1);
	write(1, &d3, 1);
	write(1, &d4, 1);
}

void	ft_print_comma(char d1, char d2, char d3, char d4)
{
	if (d1 == '9' && d2 == '8' && d3 == '9' && d4 == '9')
	{
		return ;
	}
	else
	{
		write(1, ", ", 2);
	}
}

void	print_comb2(char d1, char d2, char d3, char d4)
{
	while (d1 <= '9')
	{
		d2 = '0';
		while (d2 <= '9')
		{
			d3 = d1;
			d4 = d2 + 1;
			while (d3 <= '9')
			{
				while (d4 <= '9')
				{
					ft_print_4_digits(d1, d2, d3, d4);
					ft_print_comma(d1, d2, d3, d4);
					d4++;
				}
				d3++;
				d4 = '0';
			}
			d2++;
		}
		d1++;
	}
}

void	ft_print_comb2(void)
{
	char	d1;
	char	d2;
	char	d3;
	char	d4;

	d1 = '0';
	d2 = '0';
	d3 = '0';
	d4 = '0';
	print_comb2(d1, d2, d3, d4);
}

/*int	main(void)
{
	ft_print_com2();
	return (0);
}*/
/*
d1d2 d3d4 : 00 01, 00 02, 00 03, .....,98 99
when d3 increases by 1 then d4 : 0 -> 9 
when d2 increases by 1 then d3 : d1 -> 9, d4 = d2 + 1; 
when d1 increases by 1 then d2 : 0 -> 9, d3 = d1, d4 = d2 + 1;
*/
