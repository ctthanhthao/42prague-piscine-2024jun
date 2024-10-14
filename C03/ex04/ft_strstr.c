/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thchau <thchau@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 21:56:41 by thchau            #+#    #+#             */
/*   Updated: 2024/06/26 22:35:04 by thchau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	return (l);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	if (*to_find == '\0')
		return (str);
	i = 0;
	j = 0;
	while (str[i] != '\0' && to_find[j] != '\0')
	{
		if (str[i] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
			{
				return (str + i + 1 - ft_strlen(to_find));
			}
		}
		else
			j = 0;
		i++;
	}
	return (0);
}
/*#include <stdio.h>
int main (void)
{
	char src[5][100] = {"GeekforGeek", "fo Geek", "", "Geek For for", "fo"};
	char to_find[] = "for";
	for (int i = 0; i < 5; i++)
	{
		printf("src: %s, to_find: %s then result: %s\n", 
		src[i], to_find, ft_strstr(src[i], to_find));
	}
	char find_empty[] = "";
	printf("src: %s, to_find: %s then result: %s\n", 
		src[2], find_empty, ft_strstr(src[2], find_empty));
	return (0);
}*/
/*
RETURN VALUES
     If needle is an empty string, haystack is returned; if needle occurs
     nowhere in haystack, NULL is returned; otherwise a pointer to the first
     character of the first occurrence of needle is returned.

EXAMPLES
     The following sets the pointer ptr to the "Bar Baz" portion of largestring:

           const char *largestring = "Foo Bar Baz";
           const char *smallstring = "Bar";
           char *ptr;

           ptr = strstr(largestring, smallstring);

*/