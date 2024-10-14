/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thchau <thchau@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 05:43:57 by thchau            #+#    #+#             */
/*   Updated: 2024/06/27 09:39:31 by thchau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	is_negative;
	int	result;

	is_negative = 1;
	result = 0;
	while (*str != '\0' && *str == ' ')
		str++;
	while (*str != '\0' && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
			is_negative *= -1;
		str++;
	}
	while (*str != '\0' && is_digit(*str) == 1)
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * is_negative);
}
/*#include <stdio.h>
int main()
{
	char str[8][100] = {"", "   ", "++--", "++  ", "000", "--0",
	" ---+--+1234ab56", "-- 12a3"};
	for (int i = 0; i < 8; i++)
	{
		printf("str: %s, result: %i\n", str[i], ft_atoi(str[i]));
	}
	return (0);
}*/