/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thchau < thchau@student.42prague.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 21:53:06 by thchau            #+#    #+#             */
/*   Updated: 2024/06/27 14:11:20 by thchau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	return (l);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_length;
	unsigned int	src_length;

	if (size == 0)
		return (0);
	i = 0;
	dest_length = ft_strlen(dest);
	src_length = ft_strlen(src);
	if (size < dest_length)
		return (0);
	while (src[i] != '\0' && i < size - dest_length - 1)
	{
		dest[dest_length + i] = src[i];
		i++;
	}
	dest[dest_length + i] = '\0';
	return (dest_length + i);
}
/*include <stdio.h>
int main(void)
{
	unsigned int n = 11;
	char dest[4][100] = {"", "foo bar", "foo ba", "foo foo ba"};
	char src[] = "1ken";
	for (int i = 0; i < 4; i++)
	{
		printf("START size = %d dest:%s ", n, dest[i]);
		printf("|src:%s then |result:%d\n", src, ft_strlcat(dest[i], src, n));
		printf("END dest:%s\n", dest[i]);
		printf("\n");
	}
	char src1[] = "larger than 11";
	char dest1[] = "test ";
	printf("START size = %i dest:%s ", n, dest1);
	printf("|src:%s then |result:%d\n", src1, ft_strlcat(dest1, src1, n));
	printf("END dest:%s\n", dest1);
	printf("\n");
}*/
/*
1- strlcat() appends string src to the end of dst.  It will append at most
dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless
dstsize is 0 or the original dst string was longer than dstsize (in
practice this should not happen as it means that either dstsize is
incorrect or that dst is not a proper string).
2 - strlcat() take the full size of the destination buffer and
guarantee NUL-termination if there is room.  Note that room for the NUL
should be included in dstsize
3 - strlcat() functions return the total length of the string they tried
to create that means the initial length of dst plus the length of src
*/