/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thchau < thchau@student.42prague.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 08:55:07 by thchau            #+#    #+#             */
/*   Updated: 2024/06/20 08:57:59 by thchau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
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
	char *str2 = "KJSDDSCSDS";
	char *str3 = "SDSDS&*^%%D";
	char *str4 = "Z";
	printf("if str is %s then return %d\n", str, ft_str_is_uppercase(str));
	printf("if str is %s then return %d\n", str1, ft_str_is_uppercase(str1));
	printf("if str is %s then return %d\n", str2, ft_str_is_uppercase(str2));
	printf("if str is %s then return %d\n", str3, ft_str_is_uppercase(str3));
	printf("if str is %s then return %d\n", str4, ft_str_is_uppercase(str4));
	return (0);
}*/
