/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:41:59 by yakhay            #+#    #+#             */
/*   Updated: 2022/10/25 18:55:48 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	j;
	size_t	len;

	len = 0;
	while (src[len])
		len++;
	j = 0;
	if (size != 0)
	{
		while (src[j] && j < size - 1)
		{
			dest[j] = src[j];
			j++;
		}
		dest[j] = '\0';
	}
	return (len);
}

// #include <string.h>
// #include <stdio.h>
// int main()
// {
// 	//printf("%zu\n", ft_strlcpy("coucou", "AAAAAAAAAA", 17));
// 	char *s = strdup("skdncd");
// 	char *s1 =strdup("skdnceeefrefreferfe");
// 	printf("iiii ;%zu", ft_strlcpy(s, s1, 27));
// 	printf("ORIGIN ;%zu", strlcpy(s, s1, 27));
// }
