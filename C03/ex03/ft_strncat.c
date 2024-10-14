/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thchau <thchau@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 21:51:32 by thchau            #+#    #+#             */
/*   Updated: 2024/06/26 22:58:18 by thchau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	if (nb < 1)
	{
		return (dest);
	}
	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include <stdio.h>
int main (void)
{
	char src[5][100] = {"Here",",World!", "", "Earth", ""};
	char dest[5][100] = {"","Hello", "Test", "TEa", ""};

	for (int i = 0; i < 5; i++)
	{
		printf("After concatination: %s \n", ft_strncat(dest[i], src[i], 4));
	}
}*/