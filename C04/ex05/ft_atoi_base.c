/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thchau <thchau@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 09:12:00 by thchau            #+#    #+#             */
/*   Updated: 2024/06/27 10:43:26 by thchau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	l;

	l = 0;
	while (str[l] != '\0')
		l++;
	return (l);
}

int	is_valid_against_base(char c, char *base)
{
	int	i;
	int	found;

	i = 0;
	found = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
		{
			found = 1;
			break ;
		}
		i++;
	}
	return (found);
}

int	validate_base(char *base)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
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

int	ft_convert_to_dec(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != 0)
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	unsigned int	base_len;
	int				result;
	int				is_negative;

	result = 0;
	is_negative = 1;
	if (validate_base(base) == 1)
	{
		while (*str != '\0' && *str == ' ')
			str++;
		while (*str != '\0' && (*str == '+' || *str == '-'))
		{
			if (*str == '-')
				is_negative *= -1;
			str++;
		}
		base_len = ft_strlen(base);
		while (*str != '\0' && is_valid_against_base(*str, base) == 1)
		{
			result = result * base_len + ft_convert_to_dec(*str, base);
			str++;
		}
	}
	return (result * is_negative);
}
/*#include <stdio.h>
int main()
{
	char str[8][100] = {"", "   ", "++--", "++  ", "000", "--0", "-- 12a3"};
	printf("== Invalid input string \n");
	for (int i = 0; i < 8; i++)
	{
		printf("str: %s, result: %i\n", str[i], ft_atoi_base(str[i], "123456"));
	}
	printf("\n== Invalid base \n");
	char n[] = "123456";
	printf("\n1. Base is empty\n");
	printf("Result: %i\n", ft_atoi_base(n, ""));
	printf("\n2. Base size of 1\n");
	printf("Result: %i\n", ft_atoi_base(n, "9"));
	printf("\n2. Base contains the same character twice\n");
	printf("Result: %i\n", ft_atoi_base(n, "1234567889A"));
	printf("Result: %i\n", ft_atoi_base(n, "123456789A8"));
	printf("\n2. Base contains + or - ;\n");
	printf("Result: %i\n", ft_atoi_base(n, "+123456789A"));
	printf("Result: %i\n", ft_atoi_base(n, "123456-789A"));

	printf("\n== atoi base \n");
	char base[4][100] = {"01", "0123456789", "0123456789ABCDEF"};
	char str1[4][100] = {"++1000", "  789", " +--4FF"};
	for (int i = 0; i < 3; i++)
	{
		for (int j =0; j < 3; j++)
		{
			printf("Str: %s Base: %s Result: %i\n", 
			str1[i], base[j], ft_atoi_base(str1[i], base[j]));
		}
	}
	return (0);
}*/