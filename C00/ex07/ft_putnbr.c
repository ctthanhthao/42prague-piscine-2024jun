/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thchau < thchau@student.42prague.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 09:33:35 by thchau            #+#    #+#             */
/*   Updated: 2024/06/24 10:48:24 by thchau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_arr(char arr[], int size)
{
	write(1, arr, size);
}

void	reverse_str(char str[], int strlen)
{
	int		start;
	int		end;
	char	tmp;

	start = 0;
	end = strlen - 1;
	while (start < end)
	{
		tmp = str[start];
		str[start] = str[end];
		str[end] = tmp;
		start++;
		end--;
	}
}

int	convert_int_to_arr(int number, char arr[], int is_negative)
{
	int	rmd;
	int	i;

	i = 0;
	while (number != 0)
	{
		rmd = number % 10;
		arr[i] = rmd + '0';
		number = number / 10;
		i++;
	}
	if (is_negative)
	{
		arr[i++] = '-';
	}
	return (i);
}

void	ft_putnbr(int nb)
{
	char	digits[11];
	int		is_negative;
	int		str_len;

	is_negative = 0;
	if (nb == 0)
	{
		digits[0] = '0';
		ft_put_arr(digits, 1);
		return ;
	}
	if (nb == -2147483648)
	{
		ft_put_arr("-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		is_negative = 1;
		nb = -nb;
	}
	str_len = convert_int_to_arr(nb, digits, is_negative);
	reverse_str(digits, str_len);
	ft_put_arr(digits, str_len);
}

/*int	main(void)
{
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	return (0);
}*/