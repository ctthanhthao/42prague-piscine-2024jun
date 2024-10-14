/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thchau <thchau@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 21:52:47 by thchau            #+#    #+#             */
/*   Updated: 2024/06/26 21:55:45 by thchau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*#include <stdio.h>
int main (void)
{
	char src[4][100] = {"",",World!", "", "Earth"};
	char dest[4][100] = {"","Hello", "Test", "TEa"};

	for (int i = 0; i < 4; i++)
	{
		printf("After concatination: %s \n", ft_strcat(dest[i], src[i]));
	}
}*/