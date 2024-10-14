/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thchau < thchau@student.42prague.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 08:56:42 by thchau            #+#    #+#             */
/*   Updated: 2024/06/26 14:22:41 by thchau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_length;

	src_length = 0;
	i = 0;
	while (src[src_length])
		src_length++;
	if (size < 1)
		return (src_length);
	while (src[i] != '\0' && src_length < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_length);
}

/*#include <stdio.h>
int	main(void)
{
	char src[3][15] = {"Hello", "Test It", "Test Please"};
	char dest[7];
	unsigned int length;

	for(int i = 0 ; i < 3 ; i++)
	{
		length = ft_strlcpy(dest, src[i], sizeof(dest));
		printf("Source: %s\n", src[i]);
		printf("Destination: %s\n", dest);
		printf("Length is  %i\n", length);
		printf("\n");
	}

	char dest1[100];
	length = ft_strlcpy(dest1, src[0], 0);
		printf("Source: %s\n", src[0]);
		printf("Destination: %s\n", dest1);
		printf("Length is  %i\n", length);
		printf("\n");
}*/
