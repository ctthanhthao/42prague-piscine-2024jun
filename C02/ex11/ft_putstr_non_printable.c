/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thchau < thchau@student.42prague.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 08:57:00 by thchau            #+#    #+#             */
/*   Updated: 2024/06/20 09:08:52 by thchau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_convert_to_hexa(unsigned char c)
{
	char	*hexa_base;

	hexa_base = "0123456789abcdef";
	write(1, &hexa_base[c / 16], 1);
	write(1, &hexa_base[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 32 && *str <= 126)
		{
			write (1, str, 1);
		}
		else
		{
			write (1, "\\", 1);
			ft_convert_to_hexa (*str);
		}
		str++;
	}
}

/*#include <stdio.h>
int main() {
    char *test1 = "Coucou\ntu vas bien ?";
    char *test2 = "Test\t\v again";// Non-printable

    printf("Test1: \n");
    ft_putstr_non_printable(test1); // Should print "Coucou\0atu vas bien ?"
	printf("\n");
    printf("Test2: \n");
    ft_putstr_non_printable(test2); // Should print "\09\0b"
	// for ref: https://dev.to/smpnjn/full-list-of-non-printable-characters-lgp 
	printf("\n");

    return 0;
}*/
