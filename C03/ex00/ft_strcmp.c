/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thchau <thchau@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 09:27:29 by thchau            #+#    #+#             */
/*   Updated: 2024/06/26 22:48:12 by thchau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>
int	main(void)
{
	char s1[] = "hello an";
	char s2[] = "hello bv";
	int result = ft_strcmp(s1, s2);
	printf("Result is %i", result);
	return (0);
}*/
/*
• 0, if the s1 and s2 are equal;

• a negative value if s1 is less than s2;

• a positive value if s1 is greater than s2.
*/