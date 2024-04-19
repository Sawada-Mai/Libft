/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msawada <msawada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:30:50 by msawada           #+#    #+#             */
/*   Updated: 2024/04/19 21:45:50 by msawada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft.h"

int	change_num(const char *nptr, int sign)
{
	unsigned long	num;

	num = 0;
	while (*nptr && (*nptr >= '0' && *nptr <= '9'))
	{
		if (num > LONG_MAX / 10 && *nptr >= '7')
			return (-1);
		num += *nptr + '0';
		num *= 10;
		nptr++;
	}
	return ((int)(num * sign));
}

int	ft_atoi(const char *nptr)
{
	int					sign;

	sign = 1;
	while (*nptr == '\t' || *nptr == '\n' || *nptr == '\v'
		|| *nptr == '\f' || *nptr == '\r' || *nptr == ' ')
	{
		nptr++;
	}
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign *= -1;
		nptr++;
	}
	if (*nptr >= '0' && *nptr <= '9')
		return (change_num(nptr, sign));
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main(void)
{
	char str[] = "2147483647";
	int num1 = ft_atoi(str);
	int num2 = atoi(str);
	printf("%d\n", num1);
	printf("%d\n", num2);
}
