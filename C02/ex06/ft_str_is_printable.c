/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thchau < thchau@student.42prague.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 08:55:26 by thchau            #+#    #+#             */
/*   Updated: 2024/06/20 09:13:21 by thchau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str >= ' ' && *str <= '~')
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
	char *str1 = "!@~#$%^&&*DFGHR";
	char *str2 = "+_(*)ccfdff)";
	char *str3 = "SDScfd&*^%%12323~";
	char *str4 = "€†Š<=>";
	printf("if str is %s then return %d\n", str, ft_str_is_printable(str));
	printf("if str is %s then return %d\n", str1, ft_str_is_printable(str1));
	printf("if str is %s then return %d\n", str2, ft_str_is_printable(str2));
	printf("if str is %s then return %d\n", str3, ft_str_is_printable(str3));
	printf("if str is %s then return %d\n", str4, ft_str_is_printable(str4));
	return (0);
}*/
