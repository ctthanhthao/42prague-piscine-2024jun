/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thchau < thchau@student.42prague.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 09:48:39 by thchau            #+#    #+#             */
/*   Updated: 2024/06/27 13:43:36 by thchau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
		i++;
	if (s1[i] == s2[i])
		return (0);
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>
int	main(void)
{
	char s1[5][100] = {"", "hello a", "hello cd", "hello ef", "hel"};
	char s2[5][100] = {"", ""		, "hello"   , "hello c" , "hell"};
	int result;
	
	for (int i = 0; i < 5; i++)
	{
		result = ft_strncmp(s1[i], s2[i], 5);
		printf("Result is %d \n", result);
	}
	return (0);
}*/