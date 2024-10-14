/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thchau < thchau@student.42prague.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 08:56:22 by thchau            #+#    #+#             */
/*   Updated: 2024/06/20 09:12:58 by thchau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alphanumberic(char str)
{
	if ((str >= 'a' && str <= 'z')
		|| (str >= 'A' && str <= 'Z')
		|| (str >= '0' && str <= '9'))
	{
		return (1);
	}
	else
		return (0);
}

char	ft_strupcase(char str)
{
	if (str >= 'a' && str <= 'z')
	{
		str = str - ' ';
	}
	return (str);
}

char	ft_strlowcase(char str)
{
	if (str >= 'A' && str <= 'Z')
	{
		str = str + ' ';
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;
	int				capitalize;

	i = 0;
	capitalize = 1;
	while (str[i] != '\0')
	{
		if (ft_str_is_alphanumberic(str[i]) == 1)
		{
			if (capitalize == 1)
			{
				str[i] = ft_strupcase(str[i]);
				capitalize = 0;
			}
			else
				str[i] = ft_strlowcase(str[i]);
		}
		else
			capitalize = 1;
		i++;
	}
	return (str);
}

/*#include <stdio.h>
int	main(void)
{
	char s[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("Result is %s \n", ft_strcapitalize(s));
	return (0);
}*/
