/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thchau < thchau@student.42prague.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 08:56:05 by thchau            #+#    #+#             */
/*   Updated: 2024/06/20 09:00:41 by thchau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + ' ';
		}
		i++;
	}
	return (str);
}

/*#include <stdio.h>
int	main(void)
{
	char str[4][100] = {"", "DGSH", "ccfdffKDKSAZ", "&*^%%12323"};
	for (int i = 0; i < 4; i++)
	{
		printf("String is %s\n", str[i]);
		ft_strlowcase(str[i]);
		printf("String after uppercase is %s\n", str[i]);
		printf("\n");
	}

	return (0);
}*/
