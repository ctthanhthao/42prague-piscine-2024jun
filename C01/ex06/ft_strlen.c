/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thchau < thchau@student.42prague.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 09:30:43 by thchau            #+#    #+#             */
/*   Updated: 2024/06/19 09:21:04 by thchau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}

/*#include <stdio.h>
int	main(void)
{
	char *str = "Test string and count";
	printf("Length of string is %d\n", ft_strlen(str));
	printf("String after call %s\n", str);
}*/
