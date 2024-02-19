/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msawada <msawada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:55:14 by msawada           #+#    #+#             */
/*   Updated: 2024/02/19 12:55:17 by msawada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (dest == NULL && src == NULL)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if ((d > s && d < s + n) || (d < s && d + n < s))
	{
		i = 1;
		while (i <= n)
		{
			d[n - i] = s[n - i];
			i++;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (d);
}

// #include <stdio.h>
// int main()
// {
//     char source[] = "Hello, World!";
//     char destination[20];

//     // データをコピー
//     memmove(destination, source, 13);

//     // 結果を表示
//     printf("Source: %s\n", source);
//     printf("Destination: %s\n", destination);

//     return 0;
// }