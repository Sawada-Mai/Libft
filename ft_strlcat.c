/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msawada <msawada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 18:04:55 by msawada           #+#    #+#             */
/*   Updated: 2024/02/19 14:16:29 by msawada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return i;
}

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	d;
	size_t	s;

	s = ft_strlen(src);
	if (dest == NULL && size == 0)
		return (s);
	d = ft_strlen(dest);
	if (size < d)
		return (size + s);
	i = 0;
	while (src[i] && (d + i) < (size - 1))
	{
		dest[d + i] = src[i];
		i++;
	}
	dest[d + i] = '\0';
	return (d + s);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char src1[100] = "hello";
// 	char src2[100] = "_Tokyo";
// 	char src3[100] = "hello";
// 	char src4[100] = "_Tokyo";
// 	int i;

// 	i = ft_strlcat(src1, src2, 15);
// 	printf("%d\n", i);
// 	printf("%s\n", src1);
// 	i = strlcat(src3, src4, 15);
// 	printf("%d\n", i);
// 	printf("%s\n", src1);
// }