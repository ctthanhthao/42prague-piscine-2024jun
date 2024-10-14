/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thchau <thchau@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 06:37:02 by thchau            #+#    #+#             */
/*   Updated: 2024/06/27 09:09:51 by thchau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	l;

	l = 0;
	while (str[l] != '\0')
		l++;
	return (l);
}

int	validate_base(char *base)
{
	unsigned int	i;
	unsigned int	j;

	if (*base == '\0' || ft_strlen(base) <= 1)
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_print_base_nbr(int nbr, char *base, unsigned int len)
{
	unsigned int	n;
	char			c;

	if (nbr < 0)
	{
		write (1, "-", 1);
		n = nbr * (-1);
	}
	else
		n = nbr;
	if (n >= len)
		ft_print_base_nbr(n / len, base, len);
	c = base[n % len];
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	base_len;

	if (validate_base(base) == 1)
	{
		base_len = ft_strlen(base);
		ft_print_base_nbr(nbr, base, base_len);
	}
}
/*#include <stdio.h>
int main(void)
{
	int n = -567899;
	printf("Convert %i to binary: \n", n);
	ft_putnbr_base(n, "01");
	printf("\nConvert %i to decimal: \n", n);
	ft_putnbr_base(n, "0123456789");
	printf("\nConvert %i to hexadecimal: \n", n);
	ft_putnbr_base(n, "0123456789ABCDEF");
	printf("\nConvert %i to octal: \n", n);
	ft_putnbr_base(n, "poneyvif");
	printf("\nInvalid Args such as: \n");
	printf("\n1. Base is empty\n");
	ft_putnbr_base(n, "");
	printf("\n2. Base size of 1\n");
	ft_putnbr_base(n, "9");
	printf("\n2. Base contains the same character twice\n");
	ft_putnbr_base(n, "1234567889A");
	ft_putnbr_base(n, "123456789A8");
	printf("\n2. Base contains + or - ;\n");
	ft_putnbr_base(n, "+123456789A");
	ft_putnbr_base(n, "123456-789A");
	return (0);
}*/