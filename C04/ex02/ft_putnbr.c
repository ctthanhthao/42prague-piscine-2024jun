/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thchau <thchau@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 05:55:56 by thchau            #+#    #+#             */
/*   Updated: 2024/06/27 06:34:29 by thchau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
		l++;
	return (l);
}

void	ft_rev_str(char *tab)
{
	int		start;
	int		end;
	char	tmp;

	start = 0;
	end = ft_strlen (tab) - 1;
	while (start < end)
	{
		tmp = *(tab + start);
		*(tab + start) = *(tab + end);
		*(tab + end) = tmp;
		start++;
		end--;
	}
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write (1, str, 1);
		str++;
	}
}

void	ft_convert_num_to_str(char *res, int nb, int sign)
{
	int		rmd;
	int		i;

	i = 0;
	while (nb > 0)
	{
		rmd = nb % 10;
		res[i] = rmd + '0';
		nb = nb / 10;
		i++;
	}
	if (sign == -1)
		res[i] = '-';
	res[++i] = '\0';
	ft_rev_str (res);
}

void	ft_putnbr(int nb)
{
	int		sign;
	char	digits[12];

	sign = 1;
	if (nb == 0)
	{
		write (1, "0", 1);
		return ;
	}
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		sign *= -1;
		nb *= -1;
	}
	ft_convert_num_to_str(digits, nb, sign);
	ft_putstr (digits);
}
/*
int main(void)
{
	int num[5] = {0, -34343, 343424, -2147483648, 2147483647};
	for (int i = 0; i < 5; i++)
	{
		ft_putnbr(num[i]);
		write(1, "\n", 1);
	}
	return 0;
}*/