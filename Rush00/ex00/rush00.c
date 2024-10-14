/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thchau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 12:42:40 by thchau            #+#    #+#             */
/*   Updated: 2024/06/09 16:15:39 by raimagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_ln(int length, char start_end, char middle)
{
	int		i;

	i = 0;
	if (length == 1)
	{
		ft_putchar(start_end);
	}
	else
	{
		ft_putchar(start_end);
		while (i < length - 2)
		{
			ft_putchar(middle);
			i++;
		}
		ft_putchar(start_end);
	}
	ft_putchar('\n');
}

void	rush(int length, int width)
{
	int	i;

	i = 0;
	if (length <= 0 || width <= 0)
		return ;
	while (i < width)
	{
		if (i == 0 || i == width - 1)
		{
			print_ln(length, 'o', '-');
		}
		else
		{
			print_ln(length, '|', ' ');
		}
		i++;
	}
}
/*
line 26: print first character
line 27-31: print middle characters
line 32: print last character

line 44-47: print first line or bottom line
line 48-51: print middle lines
*/
