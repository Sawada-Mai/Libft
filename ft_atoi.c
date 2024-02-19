/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msawada <msawada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:30:50 by msawada           #+#    #+#             */
/*   Updated: 2024/02/19 14:15:24 by msawada          ###   ########.fr       */
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

int atoi(const char *str)
{
	int sign;
	size_t num;

	sign = 1;
	num = 0;
	while (*str == '\a' || *str == '\b' || *str =='\t' || *str =='\n' 
	|| *str =='\v' || *str =='\f' || *str =='\r'|| *str ==' ')
	{
		str++;
	}
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = (num * 10) + (*str - '0');
		str++;
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