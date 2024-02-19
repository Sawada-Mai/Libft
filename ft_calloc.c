/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msawada <msawada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:36:18 by msawada           #+#    #+#             */
/*   Updated: 2024/02/19 14:15:45 by msawada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	if (nmemb != 0 && size != 0 && SIZE_MAX / nmemb < size)
		return (NULL);
	p = (void*)malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	ft_memset(p, 0, nmemb * size);
	return (p);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main() {
// 	int n = 0;
// 	int *arr = (int*) ft_calloc(n, sizeof(int));

// 	if (arr == NULL) {
// 		printf("メモリの確保に失敗しました。\n");
// 		return 1;
// 	}

// 	for (int i = 0; i < n; i++) {
// 		arr[i] = i;
// 		printf("%d ", arr[i]);
// 	}

// 	free(arr);
// 	return 0;
// }