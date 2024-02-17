/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msawada <msawada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 17:21:54 by msawada           #+#    #+#             */
/*   Updated: 2024/02/17 17:44:20 by msawada          ###   ########.fr       */
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

#include <stdio.h>
#include <string.h>
int main(void)
{
	int str1 = ft_strlen("Hello!");
	int str2 = strlen("Hello!");

	printf("%d\n", str1);
	printf("%d\n", str2);
}