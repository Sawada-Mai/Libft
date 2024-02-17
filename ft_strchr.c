/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msawada <msawada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 17:39:16 by msawada           #+#    #+#             */
/*   Updated: 2024/02/17 17:52:46 by msawada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((*s == (char)c))
		return ((char *) s);
	return (NULL);
}

#include <stdio.h>
#include <string.h>
int main(void)
{
	char str1[] = "42 Tokyo";
	char c = 'T';

	printf("%s\n", ft_strchr(str1, c));
	printf("%s\n", strchr(str1, c));
}