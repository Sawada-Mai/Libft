/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msawada <msawada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 17:16:27 by msawada           #+#    #+#             */
/*   Updated: 2024/02/19 14:17:04 by msawada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 'a' - 'A';
	}
	return (c);
}

// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
// 	printf("%c\n", ft_tolower('t'));
// 	printf("%c\n\n", tolower('t'));
// 	printf("%c\n", ft_tolower('T'));
// 	printf("%c\n\n", tolower('T'));
// 	printf("%c\n", ft_tolower('2'));
// 	printf("%c\n", tolower('2'));
// }