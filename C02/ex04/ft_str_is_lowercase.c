/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thchau < thchau@student.42prague.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 08:54:48 by thchau            #+#    #+#             */
/*   Updated: 2024/06/20 08:58:11 by thchau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			str++;
			continue ;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*#include <stdio.h>
int	main(void)
{
	char *str = "";
	char *str1 = "dfdhgdhgu";
	char *str2 = "dfd23hgdhgu";
	char *str3 = "dfdhg&*^%%ghgu";
	char *str4 = "GAAHDHAD";
	printf("if str is %s then return %d\n", str, ft_str_is_lowercase(str));
	printf("if str is %s then return %d\n", str1, ft_str_is_lowercase(str1));
	printf("if str is %s then return %d\n", str2, ft_str_is_lowercase(str2));
	printf("if str is %s then return %d\n", str3, ft_str_is_lowercase(str3));
	printf("if str is %s then return %d\n", str4, ft_str_is_lowercase(str4));
	return (0);
}*/
