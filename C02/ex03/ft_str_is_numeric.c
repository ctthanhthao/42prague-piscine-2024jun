/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thchau < thchau@student.42prague.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 08:54:29 by thchau            #+#    #+#             */
/*   Updated: 2024/06/20 09:13:40 by thchau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
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
	char *str1 = "0";
	char *str2 = "dfd23hgdhgu";
	char *str3 = "1234*^%%565";
	char *str4 = "23423432454";
	printf("if str is %s then return %d\n", str, ft_str_is_numeric(str));
	printf("if str is %s then return %d\n", str1, ft_str_is_numeric(str1));
	printf("if str is %s then return %d\n", str2, ft_str_is_numeric(str2));
	printf("if str is %s then return %d\n", str3, ft_str_is_numeric(str3));
	printf("if str is %s then return %d\n", str4, ft_str_is_numeric(str4));
	return (0);
}*/
