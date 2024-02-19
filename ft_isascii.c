/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msawada <msawada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 16:52:11 by msawada           #+#    #+#             */
/*   Updated: 2024/02/19 14:15:57 by msawada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
// 	printf("%d\n", ft_isascii('4'));
// 	printf("%d\n\n",isascii('4'));
// 	printf("%d\n", ft_isascii('t'));
// 	printf("%d\n\n", isascii('t'));
// 	printf("%d\n", ft_isascii('÷'));
// 	printf("%d\n", isascii('÷'));
// }