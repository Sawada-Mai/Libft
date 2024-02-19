/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msawada <msawada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:30:50 by msawada           #+#    #+#             */
/*   Updated: 2024/02/19 14:22:46 by msawada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int check_num(size_t num, int sign)
{
	if (num == 0)
		return (0);
	else if (num - 1 > INT_MAX && sign == -1)
		return (0);
	else if (num > INT_MAX && sign == 1)
		return (-1);
	return (num * sign);
}

int ft_atoi(const char *nptr)
{
	int sign;
	size_t num;

	sign = 1;
	num = 0;
	while (*nptr == '\a' || *nptr == '\b' || *nptr =='\t' || *nptr =='\n' 
	|| *nptr =='\v' || *nptr =='\f' || *nptr =='\r'|| *nptr ==' ')
	{
		nptr++;
	}
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign *= -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		num = (num * 10) + (*nptr - '0');
		nptr++;
	}
	return (check_num(num, sign));
}


// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
// 	char str[] = "-9226854775808";
// 	int num;
// 	num = ft_atoi(str);
// 	// num = atoi(str);
// 	printf("%d\n", num);
// }