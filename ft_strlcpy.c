/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msawada <msawada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 18:04:45 by msawada           #+#    #+#             */
/*   Updated: 2024/02/17 19:07:16 by msawada          ###   ########.fr       */
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

size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t len)
{
	size_t i;

	i = 0;
	if (len != 0)
	{
		while (src[i] && (i + 1) < len)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

#include <stdio.h>
#include <string.h>
int main()
{
	char dest[15];
	char str1[] = "42_Tokyo";
	int i;

	i = ft_strlcpy(dest, str1, 8);
	printf("%s\n", dest);
	printf("%i\n\n", i);
	i = strlcpy(dest, str1, 8);
	printf("%s\n", dest);
	printf("%i\n", i);
	return 0;
}