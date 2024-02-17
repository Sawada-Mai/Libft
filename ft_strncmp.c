/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msawada <msawada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 18:03:34 by msawada           #+#    #+#             */
/*   Updated: 2024/02/17 18:32:11 by msawada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (s1[i] && s2[i] && n - i > 0)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s1[i] != s2[i] && i < n)
		return (s1[i] - s2[i]);
	return (0);
}

#include <stdio.h>
#include <string.h>
int main(void)
{
	char str1[] = "Hello! 42 Tokyo";
	char str2[] = "He";
	int i = 9;

	printf("%d\n", ft_strncmp(str1, str2, i));
	printf("%d\n", strncmp(str1, str2, i));
}