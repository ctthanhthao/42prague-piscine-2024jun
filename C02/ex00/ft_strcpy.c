/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thchau < thchau@student.42prague.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 08:50:26 by thchau            #+#    #+#             */
/*   Updated: 2024/06/20 08:51:24 by thchau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char *src = "Hello, World!";
    char dest[15];
	char *result;

    result = ft_strcpy(dest, src);

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);
	printf("Result: %s\n", result);

    return 0;
}*/
