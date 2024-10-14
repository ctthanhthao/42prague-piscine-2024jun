/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thchau < thchau@student.42prague.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 09:34:31 by thchau            #+#    #+#             */
/*   Updated: 2024/06/26 12:13:40 by thchau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_new_ln_or_comma(char digits[], int n)
{
	int		i;
	char	max_number;
	int		should_print_new_ln;

	i = 0;
	should_print_new_ln = 1;
	while (i < n)
	{
		max_number = (10 - n + i) + '0';
		if (digits[i] != max_number)
		{
			should_print_new_ln = 0;
		}
		i++;
	}
	if (should_print_new_ln == 0)
	{
		write(1, ", ", 2);
	}
	else
	{
		return ;
	}
}

int	char_to_int(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (c - '0');
	}
	else
	{
		return (-1);
	}
}

void	ft_print_combn_recur(char digits[], int idx, int n)
{
	int	d;
	int	num;
	int	max_num;

	d = char_to_int(digits[idx]);
	max_num = 10 - n + idx;
	while (d <= max_num)
	{
		if (idx == n - 1)
		{
			write(1, digits, n);
			ft_print_new_ln_or_comma(digits, n);
		}
		else
		{
			num = char_to_int(digits[idx] + 1);
			digits[idx + 1] = num + '0';
			ft_print_combn_recur(digits, idx + 1, n);
		}
		d++;
		digits[idx] = d + '0';
	}
}

void	ft_print_combn(int n)
{
	int		index;
	int		i;
	char	digits[10];

	index = 0;
	i = 0;
	if (n < 1 || n > 9)
	{
		return ;
	}
	while (i < n)
	{
		digits[i] = i + '0';
		i++;
	}
	ft_print_combn_recur(digits, index, n);
}

/*int	main(void)
{
	ft_print_combn(9);
	return (0);
}*/
