/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thchau < thchau@student.42prague.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 08:55:43 by thchau            #+#    #+#             */
/*   Updated: 2024/06/20 09:01:56 by thchau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ' ';
		}
		i++;
	}
	return (str);
}

/*#include <stdio.h>
int	main(void)
{
	char str[5][100] = {"", "!@~#$%^&&*DGSH", "ccfdffKDKSKDNSN",
	 "&*^%%12323", "aaazzz"};
	for (int i = 0; i < 5; i++)
	{
		printf("String is %s\n", str[i]);
		ft_strupcase(str[i]);
		printf("String after uppercase is %s\n", str[i]);
		printf("\n");
	}

	return (0);
}*/
