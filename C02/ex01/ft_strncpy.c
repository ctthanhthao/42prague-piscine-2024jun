/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thchau < thchau@student.42prague.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 08:52:05 by thchau            #+#    #+#             */
/*   Updated: 2024/06/20 08:59:37 by thchau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*end_dest;
	unsigned int	src_length;

	end_dest = dest;
	src_length = 0;
	while (*src != '\0' && src_length < n)
	{
		*dest = *src;
		src++;
		dest++;
		src_length++;
	}
	while (src_length < n)
	{
		*dest = '\0';
		src_length++;
		dest++;
	}
	return (end_dest);
}

/*#include <stdio.h>
int	main(void)
{
	char src[] = "Hello";
	char dest[10];
	char *result;

	result = ft_strncpy(dest, src, sizeof(dest));
	printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);
	printf("Result: %s\n", result);
}*/
